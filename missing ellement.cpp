#include <iostream>
#include <time.h>


void fill(int n, int array[])
{
    bool check;
    srand(time(NULL));
    for (int i = 0; i < n; )
    {
        check = true;
        int a = rand() % 12;
        for (int j = 0; j < i; ++j)
        {
            if (array[j] == a)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            array[i] = a;
            ++i;
        }
    }
}
int main()
{
    int n;
    do
    {
        std::cout << "Input length of massive ";
        std::cin >> n;
    } while (n <= 1);
    int* array = new int[n];

    fill(n, array);

    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += array[i];
        std::cout << array[i] << " ";
    }
    delete[] array;
    std::cout << std::endl;
    std::cout << "Missing element: " << (n * (n + 1) / 2) - s << std::endl;