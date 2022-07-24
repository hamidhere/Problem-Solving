#include <iostream>
using namespace std;

int main()
{
    int n, j = 0;
    cout << "Enter total numbers: ";
    cin >> n;
    int arr[n], odd[n];
    cout << "Enter any " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}