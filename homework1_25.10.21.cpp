// homework1_25.10.2021.cpp 
//

#include <iostream>

int main()
{
    
	int n, count = 0;

	do
	{
		std::cout << "Input natural number ";
		std::cin >> n;
	} while (n < 1);


	int max = n;

	while (n != 1) 
	{
		if (n % 2 == 0) 
		{
			n /= 2;
		}
		else 
		{
			n *= 3;
			n += 1;
		}
		if (n > max) 
		{ 
		max = n;
		}
		++count;
	}


	std::cout << "Number of steps equal  " << count << std::endl;
	std::cout << "Biggest input =: " << max << std::endl;
}
