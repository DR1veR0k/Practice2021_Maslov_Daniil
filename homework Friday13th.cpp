
#include <iostream>
int main()
{

    int a, m, y, today ;
    int fridays = 0;
    for (int iyear = 1901; iyear < 2001; ++iyear)// we must limit our spectr 
    {


        for (int jday = 1; jday < 13; ++jday)
        {
            a = (14 - jday) / 12;
            m = jday + (12 * a) - 2;
            y = iyear - a;
            today = (13 + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7;
            if (today == 5)
            {
                ++fridays;
            }

        }

    }
    std::cout << "Number of 13th Fridays in XX century " << fridays << std::endl;
    std::cout << "Chance of 13th Friday in this month "<< (double)fridays/ (100*12) << std::endl;// find probability 13th friday we must /100 and multiply 12
}
