#include <cstdlib>
#include <iostream>
#include "operation.h"
#include "add.cpp"
#include "sub.cpp"
#include "mul.cpp"
#include "div.cpp"

using namespace std;

void Operation::start()
{
	int option;
	do
	{
		std::cout << "1 for Add" <<std::endl;
		std::cout << "2 for Sub" <<std::endl;
		std::cout << "3 for Mul" <<std::endl;
		std::cout << "4 for Div" <<std::endl;
		std::cout << "0 for End" <<std::endl;

		std::cin >> option;

		switch(option)
		{
			case 1:
				cout << Add(integer_1,integer_2) << endl;
				break;
			case 2:
				cout << Sub(integer_1,integer_2) << endl;
				break;
			case 3:
				cout << Mul(integer_1,integer_2) << endl;
				break;
			case 4:
				cout << Div(integer_1,integer_2) << endl;
				break;
			case 0:
				break;
			default:
				cout << "Not a valid option" << endl;	
		}
		if(option)
		{
			cout << "Enter 2 no" <<endl;
			cin >> integer_1;
			cin >> integer_2;
		}
	}while(option);
}

