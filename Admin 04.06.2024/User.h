#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <windows.h>
#include <fstream>
#include <filesystem>

//std::vector<Tested> anyone_rested;
//::map < std::string, std::vector<Test>> category_and_all_test;

__interface User
{
	virtual void Registration() = 0;
	virtual void Check_pass() = 0;
	virtual void Check_login() = 0;
	virtual std::string Encryption(std::string& pass) = 0;

};



