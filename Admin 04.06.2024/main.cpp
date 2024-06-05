#include <iostream>
#include "Tested.h"
#include "Admin.h"
#include "Test.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //category_and_all_test.insert({ "mathematics",{Test("mathematics_first","first_test_question.txt","firsttest_qanswer.txt","mathematics"),
   // Test("mathematicssecond","second_test_question.txt","econdtest_qnswer.txt","mathematics"),
    //Test("mathematicsthird","third_test_question.txt","econdtest_qnswer.txt","mathematics")} });

    //category_and_all_test.insert({ "biology",{Test("biology_first","first_test_question.txt","firsttest_qanswer.txt","biology"),
       // Test("biologysecond","second_test_question.txt","econdtest_qnswer.txt","biology"),
//Test("biologythird","third_test_question.txt","econdtest_qnswer.txt","biology")} });
    Tested a;
    a.Registration();
   
}

