#pragma once

#include "Test.h"
#include "User.h"

#include <string>

//std::vector<Tested> anyone_rested;

/// <summary>
/// folder creation Создание папки
/// </summary>
/// <param name="name directory"></param>
void Add_directory(std::string name_directory, std::filesystem::path &name_Person_Data_file, std::filesystem::path &name_statictics_file
	, std::filesystem::path &name_login_pass_file, std::filesystem::path &name_file_test_incomplete, std::filesystem::path &currentPath_);




class Tested :public User
{
	void Watch_test_work();

	std::string Encryption(std::string& pass) override;
	
	std::filesystem::path name_Person_Data_file;
	std::filesystem::path name_statictics_file;
	std::filesystem::path name_login_pass_file;
	std::filesystem::path name_file_test_incomplete;
	std::filesystem::path currentPath;

public:

	//Tested();

	void Registration() override;
	

	void Work_Test(Test test_);
	void Watch_Statictics(Test statistics_);

	void Check_pass() override;

	void Check_login() override;
	

	void Continue_the_test();

};

