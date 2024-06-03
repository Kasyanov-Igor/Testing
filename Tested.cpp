#include "Tested.h"


std::string Tested::Encryption(std::string& pass)
{
    std::string a = ""; //Строка под расшифрованный текст

    for (int i = 0; i < strlen(pass.c_str()); i++) //Запускаем цикл для каждого символа
        a += pass[i] ^ 2; // Расшифровываем и заполянем переменную.
    return pass;
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