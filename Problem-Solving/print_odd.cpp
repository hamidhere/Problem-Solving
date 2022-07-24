#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter total numbers: ";
    cin >> n;
    int arr[n];
    cout << "Enter any " << n << " numbers:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    if (arr[n]%2!=0)
    {
       cout<<arr[n];
    }
    
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    

    return 0;
}