#include "Test.h"

void Test::Display_Questions()
{
	std::filesystem::path currPath = currPath_;
	currPath += "/";
	currPath += category;
	currPath += "/";
	std::ifstream file_question(currPath += name_file_test_question);
	if (file_question.is_open()) //открыли файл
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
		file_question.close();//ќЅя«ј“≈Ћ№Ќќ «ј –џ“№ файл
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
	std::filesystem::path currPath2 = currPath_;
	std::ifstream file_answer(currPath += file_test_answer);
	if (file_answer.is_open()) //открыли файл
	{
		char number;
		while (file_answer >> number) 
		{
			answer.push_back(number);
		}

		file_answer.close();//ќЅя«ј“≈Ћ№Ќќ «ј –џ“№ файл
	}
	else
	{

		std::cout << " no file" << std::endl;
	}
	float sum_answer = 0;
	for (int i = 0; i < answer_user.size(); ++i)
	{
		
		if (answer_user[i] == answer[i])
		{
			sum_answer++;
		}
	}
	float size_ = answer_user.size();
	float percentage =  sum_answer/size_ * 100;

	std::cout << "passed " << percentage << " %" << std::endl;

	std::ofstream entry_info_person(currPath2+= statistics_test, std::ios::app);
	if (!entry_info_person.is_open())
	{
		std::cout << "The file won't open" << std::endl;
	}
	else
	{
		entry_info_person << percentage << std::endl;
		entry_info_person.close();// закрыти€ файла
	}



}

void Test::Delete_Questions(std::string user)
{
	std::filesystem::path currPath = currPath_;
	currPath += "/";
	currPath += category;
	currPath += "/";
	std::filesystem::path currPath2= currPath;

	std::string outputFileName = "output.txt";
	std::string textToRemove = "удал€емый текст"; // “екст, который нужно удалить
	std::cin >> textToRemove;
	std::ifstream inputFile(currPath+=name_file_test_question);
	std::ofstream outputFile(currPath2 +=outputFileName);

	if (!inputFile.is_open() || !outputFile.is_open())
	{
		std::cerr << "ќшибка открыти€ файла!" << std::endl;
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		if (line.find(textToRemove) == std::string::npos)
		{
			outputFile << line << std::endl;
		}
	}

	inputFile.close();
	outputFile.close();

	// ”далить оригинальный файл
	remove(name_file_test_question);

	// ѕереименовать временный файл
	rename(outputFileName, name_file_test_question);

	std::cout << "“екст удален из файла." << std::endl;



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
		a.Check_answer();
	}
	else if (directory == "history")
	{
		std::string category;
		std::cout << "select the category section\n GPW \n Napoleon " << std::endl;
		std::cin >> category;
		Test a(directory, category, category + "_responses.txt");
		/*a.Display_Questions();
		a.Check_answer();*/
		a.Delete_Questions();

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

