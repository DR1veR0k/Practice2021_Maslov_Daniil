


#include <iostream>

int main()
{
    
    std::cout << "Hello World!\n";


    int N;

    do
    {
        std::cout << "Input number of room from 1 to 2000000000 ";
        std::cin >> N;
    } while ( N < 1 or N > 2000000000);


    int rmax =  1, block = 1, floormax = 1;
    while (rmax < N)
    {
        block += 1;
        rmax += block * block;
        floormax += block;
    }
    if (rmax == N)
    {
        std::cout << "You must go " << floormax << " floor" << std::endl;
        return 0;
    }
    
    rmax -= block * block;
    rmax += 1;// комната на этаже с необходимым количеством комнат
    floormax -= block;
    floormax += 1;// первый этаж с необходимым количество комнат
    // в block записано количество комнат на этаже
    if (roommax == N)
    {
        std::cout << "You must go " << floormax << " Floor" << std::endl;
        return 0;
    }
    int k = 0;

    int tmproom = rmax;
    int tmpfloor = floormax;
    while (rmax != N)
    {
        k += 1;
        rmax = tmproom + k;
        floormax = tmpfloor + (int)k / block;
    }
    std::cout << "You must go " << floormax << " floor"<<std::endl;

 
}
