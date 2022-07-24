#include <iostream>
using namespace std;

int main()
{
    int size;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        //  if (num[i]%2==0) //for even numbers
        if (num[i] % 2 != 0) // for odd numbers
        {
            /* code */
            cout << num[i] << " ";
        }
    }

    return 0;
}