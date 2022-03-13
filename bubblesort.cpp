#include <iostream>

using namespace std;

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//time complexity is O(N^2)
#include <iostream>

using namespace std;
void bubbleSort(int* a, int size)
{
    for(int i=0;i<size-1;i++)//need to run the loop 5 time if the size is 6, as we know that every time we get 1 element sorted
    {
        for(int j=0; j<size -1-i;j++)//every time we can skip the last most element, first time 5 comparison, second time 4 comp.....5th time 1 comp.
        {
            int temp;
            temp =a[j];
            if(a[j]> a[j+1])
            {
                a[j] = a[j+1];
                a[j+1]=temp;
            }

        }
    }
}
void display(int* arr, int size)
{
    for(int i =0 ; i<size ;i++)
    {
        cout<<"element at "<<i <<"th position: "<<arr[i]<<endl;
    }
}
int main()
{
    int *arr = new int[10];
    arr[0] = 12;
    arr[1] = 9;
    arr[2] =1;
    arr[3] =33;
    arr[4] =4;
    arr[5] =42;
    arr[6] =5;
    arr[7] =11;
    arr[8] =7;
    arr[9] =18;
    cout <<"Before sorting"<<endl;
    display(arr, 10);
    bubbleSort(arr,10);
    cout <<"After sorting"<<endl;
    display(arr, 10);
    return 0;
}
