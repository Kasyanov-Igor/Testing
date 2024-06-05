#include "Test.h"

void Test::Display_Questions()
{
	std::filesystem::path currPath = currPath_;
	currPath += "/";
	currPath += category;
	currPath += "/";
	std::ifstream file_question(currPath += name_file_test_question);
	if (file_question.is_open()) //ÓÚÍ˚ÎË Ù‡ÈÎ
	{
		
		std::string line;
		short i = 0;
		while (std::getline(file_question >> std::ws, line))
		{
			
				std::cout << line << std::endl;
				++i;
				if (i == 5)
				{
					char a;
					std::cout << "type in the answer to the question" << std::endl;
					answer_user.reserve(15);
					std::cin >> a;
					answer_user.push_back(a);

					i = 0;
				}
		}
		file_question.close();//Œ¡ﬂ«¿“≈À‹ÕŒ «¿ –€“‹ Ù‡ÈÎ
	}
	else
	{
		std::cout << " no file" <<	std::endl;
	}


}

void Test::Add_Question(std::string question)
{

}

void Test::Check_answer()
{
	std::filesystem::path currPath = currPath_;
	currPath += "/";
	currPath += category;
	currPath += "/";
	std::ifstream file_answer(currPath += file_test_answer);
	if (file_answer.is_open()) //ÓÚÍ˚ÎË Ù‡ÈÎ
	{
		char number;
		while (file_answer >> number) 
		{
			answer.push_back(number);
		}

		file_answer.close();//Œ¡ﬂ«¿“≈À‹ÕŒ «¿ –€“‹ Ù‡ÈÎ
	}
	else
	{

		std::cout << " no file" << std::endl;
	}
	int sum_answer = 0;
	for (int i = 0; i < answer_user.size(); ++i)
	{
		
		if (answer_user[i] == answer[i])
		{
			sum_answer++;
		}
	}
	int size_ = answer_user.size();
	int percentage =  sum_answer/ size_ * 100;
	std::cout << "passed " << percentage << " %" << std::endl;
}

void Test::Delete_Questions(std::string question)
{

}

std::filesystem::path Test::Get_Category()
{
	return category;
}

std::filesystem::path Test::Get_Name_Test()
{
	return Test::name_file_test_question;
}

void Question()
{
	std::cout << "select the question section\n mathematics\n history \n literature " << std::endl;
	std::string directory;
	std::cin >> directory;
	if (directory == "mathematics")
	{
		std::string category;
		std::cout << "select the category section\n additions\n divisions \n multiplications " << std::endl;
		std::cin >> category;
		Test a(directory, category, category + "_responses.txt");
		a.Display_Questions();
		a.Check_answer();
	}
	else if (directory == "history")
	{
		std::string category;
		std::cout << "select the category section\n GPW \n Napoleon " << std::endl;
		std::cin >> category;
		Test a(directory, category, category + "_responses.txt");
		a.Display_Questions();
		a.Check_answer();
	}
	else if (directory == "literature")
	{
		std::string category;
		std::cout << "select the category section\n Dostoevsky \n Remarque " << std::endl;
		std::cin >> category;
		Test a(directory, category, category + "_responses.txt");
		a.Display_Questions();
		a.Check_answer();
	}
	else 
	{
		std::cout << "Test not found" << std::endl;
	}
}

