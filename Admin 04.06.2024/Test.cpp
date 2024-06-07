#include "Test.h"

void Test::Display_Questions()
{
	std::ifstream file_question(currPath_ / category / name_file_test_question);
	std::ifstream file_answer(currPath_ / category / file_test_answer);
	if (file_answer.is_open()) //открыли файл
	if (file_question.is_open()) //открыли файл
	{
		int sum = 0;
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
					std::cin >> a;
					//int reckon = 0;

					char number;
							file_answer >> number;
							if (number == a)
							{
								++sum;
							}

					//std::ifstream file_answer(currPath_ / category / file_test_answer);
					//if (file_answer.is_open()) //открыли файл
					//{

					//	char number;
					////	for (int i = 0; i < 12; ++i)
					////	{

					//		file_answer >> number;
					//		if ()

					//	}

					i = 0;
				}
		}
		file_question.close();//ќЅя«ј“≈Ћ№Ќќ «ј –џ“№ файл
		file_answer.close();
	}
	else
	{
		std::cout << " no file" <<	std::endl;
	}


}

void Test::Add_Question(std::string question)
{

}

void Test::Check_answer(char a)
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



std::map < std::string, std::vector<Test>> category_and_all_test;




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
		
	}
	else if (directory == "history")
	{
		std::string category;
		std::cout << "select the category section\n GPW \n Napoleon " << std::endl;
		std::cin >> category;
		Test a(directory, category, category + "_responses.txt");
		/*a.Display_Questions();
		a.Check_answer();*/
	

	}
	else if (directory == "literature")
	{
		std::string category;
		std::cout << "select the category section\n Dostoevsky \n Remarque " << std::endl;
		std::cin >> category;
		Test a(directory, category, category + "_responses.txt");
		a.Display_Questions();
		
	}
	else 
	{
		std::cout << "Test not found" << std::endl;
	}
}

