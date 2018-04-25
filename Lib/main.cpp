#include "operation.h"
#include <cstdlib>
#include <iostream>


using namespace std;

int main()
{	
	int value_1, value_2;
	cout << "Enter 2 no." <<endl;
	cin >> value_1;
	cin >> value_2;

	Operation operationObject(value_1,value_2);

	operationObject.start();
	return 0;
}
