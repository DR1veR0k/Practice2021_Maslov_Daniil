// homework2_25.10.2021.cpp 

#include <iostream>
#include <cmath>
int main()
{
    


    int x, tmp, n, m = 0;

    std::cout << "Input Number ";
    std::cin >> x;
    std::cout << "Input system  ";
    std::cin >> n;

    tmp = x;

    while (tmp) {
        ++m;
        tmp /= n;
    }

    m = m > 0 ? m - 1 : 0;

    tmp = 1;
    for (int i = 0; i < m; ++i) 
    {
        tmp *= n;
    }
    m = tmp;

    tmp = x;
    while (m) 
    {
        int digit = tmp / m;
        if (digit < 10)
        {
            std::cout << digit;
        }
        else
        {
            std::cout << char('A' + digit - 10);
        }
        tmp %= m;
        m /= n;
    }
}

