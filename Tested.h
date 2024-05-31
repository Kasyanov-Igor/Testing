#pragma once

#include "Test.h"
#include "User.h"
#include <fstream>
#include <string>
//std::vector<Tested> anyone_rested;

class Tested:public User
{
	void Watch_test_work();
	std::string Encryption(std::string& pass) override
	{

	}
		std::string name_Person_Data_file;
		std::string name_statictics_file;
		std::string name_login_pass_file;
		std::string name_file_test_incomplete;
		std::filesystem::path currentPath;

  public:

	  Tested();
	  
	  void Registration() override
	  {
		  std::cin.get();
		  std::cin.clear();

		  std::string name;
		  std::cout << "Enter full name:" << std::endl;
		  std::getline(std::cin, name);

		  Add_directory(name);
		  
		  std::string login;
		  std::cout << "Enter login:" << std::endl;
		  std::getline(std::cin, login);

		  std::string encrypted_login = Encryption(login);

		  std::string password;
		  std::cout << "Enter your password:" << std::endl;
		  std::getline(std::cin, password);

		  std::string encrypted_password = Encryption(password);

		 
		  std::ofstream entry_login_pass(name_login_pass_file, std::ios::app);
		  if (!entry_login_pass.is_open())
		  {
			  std::cout << "The file won't open" << std::endl;
		  }
		  else
		  {
			  entry_login_pass << encrypted_login << std::endl;
			  entry_login_pass << encrypted_password << std::endl;
			  entry_login_pass.close();// çàêðûòèÿ ôàéëà
		  }



		 

		  std::string addres;
		  std::cout << "Enter home address:" << std::endl;
		  std::getline(std::cin, addres);


		  std::string phone_number;
		  std::cout << "Enter phone number:" << std::endl;
		  std::getline(std::cin, phone_number);

		  std::ofstream entry_info_person(name_Person_Data_file, std::ios::app);
		  if (!entry_info_person.is_open())
		  {
			  std::cout << "The file won't open" << std::endl;
		  }
		  else
		  {
			  entry_info_person << name << std::endl;
			  entry_info_person << addres << std::endl;
			  entry_info_person << phone_number << std::endl;

			  entry_info_person.close();// çàêðûòèÿ ôàéëà
		  }


	  }

	  void Work_Test(Test test_);
	  void Watch_Statictics(Test statistics_);

	  void Check_pass() override
	  {
		  std::ifstream file_login(name_login_pass_file);
		  if (file_login.is_open()) //îòêðûëè ôàéë
		  {
			  std::string line;
			  while (std::getline(file_login >> std::ws, line))
			  {
				  std::cout << line;
			  }
			  file_login.close();//ÎÁßÇÀÒÅËÜÍÎ ÇÀÊÐÛÒÜ ôàéë
		  }
	  }
	  void Check_login() override
	  {
		  std::ifstream file_login(name_login_pass_file);
		  if (file_login.is_open()) //îòêðûëè ôàéë
		  {
			  std::string line;
			  while (std::getline(file_login >> std::ws, line))
			  {
				  std::cout << line;
			  }
			  file_login.close();//ÎÁßÇÀÒÅËÜÍÎ ÇÀÊÐÛÒÜ ôàéë
		  }
	  }

	  void Continue_the_test();

};

