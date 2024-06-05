#include "Tested.h"


void Add_directory(std::string name_directory, std::filesystem::path& name_Person_Data_file, std::filesystem::path& name_statictics_file
	, std::filesystem::path& name_login_pass_file, std::filesystem::path& name_file_test_incomplete, std::filesystem::path& currentPath_)
{
	std::filesystem::path currentPath = std::filesystem::current_path();
	std::filesystem::path relativePath = currentPath / name_directory;

	std::filesystem::create_directory(relativePath);


	name_Person_Data_file = relativePath/"name_Person_Data_file.txt";
	name_statictics_file = relativePath;
	name_login_pass_file = relativePath/"login_pass_file.txt";
	name_file_test_incomplete = relativePath;
	currentPath_ = relativePath;

}




std::string Tested::Encryption(std::string& pass)
{
    std::string a = ""; //Строка под расшифрованный текст

    for (int i = 0; i < strlen(pass.c_str()); i++) //Запускаем цикл для каждого символа
        a += pass[i] ^ 2; // Расшифровываем и заполянем переменную.
    return pass;
}

void Tested::Registration() 
{
	//std::cin.get();
	std::cin.clear();

	std::string name;
	std::cout << "Enter full name:" << std::endl;
	std::getline(std::cin, name);

	Add_directory(name, name_Person_Data_file, name_statictics_file, name_login_pass_file
		, name_file_test_incomplete, currentPath);

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
		entry_login_pass <<"login: " << encrypted_login << std::endl;
		entry_login_pass << "password: " << encrypted_password << std::endl;
		entry_login_pass.close();// закрытия файла
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
		entry_info_person <<"addres: "<< addres << std::endl;
		entry_info_person << "phone_number: " << phone_number << std::endl;

		entry_info_person.close();// закрытия файла
	}


}


void Tested::Watch_test_work()
{

}

void Tested::Work_Test(Test test_)
{

}

void Tested::Watch_Statictics(Test statistics_)
{

}

void Tested::Continue_the_test()
{

}

void Tested::Check_login()
{
	std::ifstream file_login(name_login_pass_file);
	if (file_login.is_open()) //открыли файл
	{
		std::string line;
		while (std::getline(file_login >> std::ws, line))
		{
			std::cout << line;
		}
		file_login.close();//ОБЯЗАТЕЛЬНО ЗАКРЫТЬ файл
	}
}

void Tested::Check_pass()
{
	std::ifstream file_login(name_login_pass_file);
	if (file_login.is_open()) //открыли файл
	{
		std::string line;
		while (std::getline(file_login >> std::ws, line))
		{
			std::cout << line;
		}
		file_login.close();//ОБЯЗАТЕЛЬНО ЗАКРЫТЬ файл
	}
}