#include "Admin.h"

std::string Admin::Encryption(std::string& pass)
{
    std::string a = ""; //������ ��� �������������� �����

    for (int i = 0; i < strlen(pass.c_str()); i++) //��������� ���� ��� ������� �������
        a += pass[i] ^ 2; // �������������� � ��������� ����������.
    return pass;
}

void Admin::Registration()
{
    static int administratorCount = 0; // ����������� ���������� ��� �������� �������� ���������� �������������
    if (administratorCount == 0)
    {
        std::cin.get();
        std::cin.clear();

        std::string name;
        std::cout << "Enter full name:" << std::endl;
        std::getline(std::cin, name);

        std::string login;
        std::cout << "Enter login:" << std::endl;
        std::getline(std::cin, login);

        std::string encrypted_login = Encryption(login);

        std::string password;
        std::cout << "Enter your password:" << std::endl;
        std::getline(std::cin, password);

        std::string encrypted_password = Encryption(password);

        ++administratorCount; // ����������� ���������� �������������


        std::ofstream record(name_login_pass_file, std::ios::app);

        record.clear();

        record << name << std::endl;
        record << encrypted_login << std::endl;
        record << encrypted_password << std::endl;
        record.close();// �������� �����
    }
    else
    {
        std::cout << "Administrator is already registered" << std::endl;
    }
}



//void Admin::Delete_Test(std::string question)
//{
//
//}
//
//void Admin::Watch_Statictics(Test statistics_)
//{
//
//}
//
//void Admin::Delete_Tested()
//{
//
//}
//
//void Admin::Add_Test()
//{
//
//}
//void Admin::Modefication_Tested()
//{
//
//}

void Admin::Check_login()
{
    std::ifstream file1(name_login_pass_file);
    if (file1.is_open()) //������� ����
    {
        std::string line;
        while (std::getline(file1 >> std::ws, line))
        {
            std::cout << line;
        }
        file1.close();//����������� ������� ����
    }
}

void Admin::Check_pass()
{
    std::ifstream file1(name_login_pass_file);
    if (file1.is_open()) //������� ����
    {
        std::string line;
        while (std::getline(file1 >> std::ws, line))
        {
            std::cout << line;
        }
        file1.close();//����������� ������� ����
    }
}