#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;



int main()
{
	for (int i = 2; i <= 101; i++)
	{
		if (isSimple(i))
		{
			cout << i << std::setw(4);
		}
	}


	return 0;

}