#include <iostream>

int main()
{ // Program about rombs 
    using namespace std;
    void spacex(int space, int x);
    int a, b;
    cout << "Input First value " << endl;
    cin >> a;
    cout << "Input second value " << endl;
    cin >> b;
    int spaces = a - 1;
    int stars = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            spacex(spaces, stars);
        }
        cout << endl;
        if (spaces != 0)
        {
            spaces -= 1;
            stars += 2;
        }
        else
        {
            spaces += 1;
            stars -= 2;
        }
    }

    for (int q = 0; q < a - 1; q++)
    {
        for (int p = 0; p < b; p++)
        {
            spacex(spaces, stars);
        }
        cout << endl;
        spaces += 1;
        stars -= 2;
    }
}
void spacex(int space, int x)
{
    for (int i = 0; i < space; i++)
    {
        cout << " ";
    }
    for (int j = 0; j < x; j++)
    {
        cout << "*";
    }
    for (int i = 0; i < space; i++)
    {
        cout << " ";
    }
}