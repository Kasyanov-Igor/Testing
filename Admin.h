#pragma once

#include "User.h"
#include <string>
#include <fstream>
#include "Test.h"

class Admin: public User
{
    std::string name_login_pass_file = "User_administrator_and_passwor";
    std::string Encryption(std::string& pass) override;

    // Admin();

   public:

       void Registration() override;
	 

	  /* void Delete_Test(std::string question);
	   void Watch_Statictics(Test statistics_);
	   void Delete_Tested();
       void Add_Test();
	   void Modefication_Tested();*/
       void Check_login() override;
	 
	   void Check_pass() override;
	  

};

