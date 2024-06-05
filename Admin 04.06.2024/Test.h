#pragma once

#include <iostream>
#include <vector>
#include <filesystem>
#include <string>
#include <fstream>
//std::map < std::string, std::vector<Test>> category_and_all_test;

class Test
{
	std::filesystem::path currPath_ = std::filesystem::current_path();

	//std::filesystem::path name;
	std::filesystem::path name_file_test_question;
	std::filesystem::path file_test_answer;
	std::filesystem::path category;
	std::filesystem::path statistics_test="statistics_test.txt";
	std::vector <char> answer;
	std::vector <char> answer_user;

 public:
	 /// <summary>
	 /// Class Test
	 /// </summary>
	 /// <param name="name_test_"></param>
	 /// <param name="name_file_test_question_"></param>
	 /// <param name="name_file_test_answer_"></param>
	 /// <param name="category_"></param>
	 Test(std::filesystem::path category_, std::filesystem::path name_file_test_question_, std::filesystem::path  name_file_test_answer_
	 )
	 {
		 category = category_;
		 name_file_test_question = name_file_test_question_+=".txt";
		 file_test_answer = name_file_test_answer_;
		 //category = category_;
	 }
	void Display_Questions();
	void Add_Question(std::string question);
    void Check_answer();
	void Delete_Questions(std::string question);

	std::filesystem::path Get_Category();
	std::filesystem::path Get_Name_Test();

	


};


void Question();

