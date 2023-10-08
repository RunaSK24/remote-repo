#include <iostream>
#include "mySort.cpp"
using namespace std;

int main()
{
    int num[10] = {12, 45, 36, 88, 18, 20, 66, 34, 48, 91};
    mySort(num, 0, 9);
    for(int i : num)
    {
        cout << i << ',';
    }
    
    return 0;
}