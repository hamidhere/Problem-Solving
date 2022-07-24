#include <iostream>
using namespace std;

int main()
{
    int i,j,k,temp;
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {1, 3, 5, 7, 9};
    int merge[10];
    for (i = 0; i < 5; i++)
    {
      merge[i]=arr1[i];  
    }    
    k=i;
    for (i = 0; i < 5; i++)
    {
      merge[k]=arr2[i];
      k++;  
    }
    cout<<"Megred array: "<<endl;
    for (i = 0; i < k; i++)
    {
        cout<<merge[i]<<" ";
    }
    

    

    return 0;
}