#pragma once

#include <iostream>
#include <vector>

//std::map < std::string, std::vector<Test>> category_and_all_test;

class Test
{
	std::string name_test;
	std::string name_file_test_question;
	std::string name_file_test_answer;
	std::string category;
	std::string name_statistics_test;

 public:

	 Test(std::string name_test_, std::string name_file_test_question_, std::string  name_file_test_answer_,
		 std::string category_)
	 {
		 name_test = name_test_;
		 name_file_test_question = name_file_test_question_;
		 name_file_test_answer = name_file_test_answer_;
		 category = category_;
	 }
	void Display_Questions();
	void Add_Question(std::string question);
    int Check_answer(std::vector<int> answer, std::string name);
	void Delete_Questions(std::string question);

	std::string Get_Category();
	std::string Get_Name_Test();



};




