#include "Tested.h"


std::string Tested::Encryption(std::string& pass)
{
    std::string a = ""; //������ ��� �������������� �����

    for (int i = 0; i < strlen(pass.c_str()); i++) //��������� ���� ��� ������� �������
        a += pass[i] ^ 2; // �������������� � ��������� ����������.
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
	if (file_login.is_open()) //������� ����
	{
		std::string line;
		while (std::getline(file_login >> std::ws, line))
		{
			std::cout << line;
		}
		file_login.close();//����������� ������� ����
	}
}

void Tested::Check_pass()
{
	std::ifstream file_login(name_login_pass_file);
	if (file_login.is_open()) //������� ����
	{
		std::string line;
		while (std::getline(file_login >> std::ws, line))
		{
			std::cout << line;
		}
		file_login.close();//����������� ������� ����
	}
}