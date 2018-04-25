#include <cstdlib>

using namespace std;

class Operation
{
	private:
		int integer_1;
		int integer_2;
	
	public:

	Operation()
	{
		integer_1 = 0;
		integer_2 = 0;
	}
	
	Operation(int value_1, int value_2)
	{
		integer_1 = value_1;
		integer_2 = value_2;
	}


	~Operation(){}

	void start();
};
	
