#include <iostream>

using namespace std;

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void SelectionSort(int* a, int size)
{
    for(int i=0;i<size-1;i++)
    {

         for(int j=i+1; j < size; j++)
        {

                if(a[j]<a[i])
                {
                    int temp =a[j];
                    a[j]= a[i];
                    a[i]=temp;
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
    int size =10 ;
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
    display(arr, size);
    SelectionSort(arr,size);
    cout <<"After sorting"<<endl;
    display(arr, size);
    return 0;
}
