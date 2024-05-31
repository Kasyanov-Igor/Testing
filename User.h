#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <windows.h>
#include <filesystem>

std::vector<Tested> anyone_rested;
std::map < std::string, std::vector<Test>> category_and_all_test;

__interface User
{
	virtual void Registration()=0;
	virtual void Check_pass()=0;
	virtual void Check_login()=0;
	virtual std::string Encryption(std::string& pass) =0;

};

void Add_directory(std::string name_directory)
{
    std::filesystem::path currentPath = std::filesystem::current_path();
    std::filesystem::path relativePath = currentPath / name_directory;
    



    if (std::filesystem::create_directory(relativePath))
    {
        std::cout << "Directory created successfully!" << std::endl;
    }
    else
    {
        std::cerr << "Failed to create directory." << std::endl;
    }

}

void Add_file(std::string name_file,std::string directory)
{
    std::filesystem::path currentPath = std::filesystem::current_path();
   



}