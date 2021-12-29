#include <iostream>

int main()
{
    
    int day;
    int month;
    int year;

    std::cout << "Input day a etc" << std::endl;
    do
    {
        std::cout << "Input day: ";
        std::cin >> day;
    } while (day < 1 or day > 31);
    do
    {
        std::cout << "Input month: ";
        std::cin >> month;
    } while (month < 1 or month > 31);
    std::cout << "Input year: ";
    std::cin >> year;

    int d = (14 - month) / 12;
    int m = month + 12 * d - 2;
    int y = year - d + 1;
    int mayday = 0;

    while (mayday != 5)
    {
        mayday = ((day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12)) % 7);
        y += 1;
    }
    std::cout << y - 1 << std::endl;
}