// homework_01.11.2021_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>


void fill(int n, int arr[])
{
    bool check;
    srand(time(NULL));
    for (int i = 0; i < n; )
    {
        check = true;
        int a = rand() % 12;
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] == a)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            arr[i] = a;
            ++i;
        }
    }   
}



int main()
{
    int n;
    do
    {
        std::cout << " Input length of massive";
        std::cin >> n;
    } while (n <= 1);
    int* arr = new int[n];

    fill(n, arr);
    
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += arr[i];
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    std::cout << std::endl;
    std::cout  << (n * (n + 1) / 2) - s << std::endl;
    return 0;
}
