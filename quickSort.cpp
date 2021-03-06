#include <iostream>

using namespace std;

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

void swap(int *a, const int i, const int j)
{
    int temp =a[i];
    a[i]=a[j];
    a[j] = temp;
}
using namespace std;

int partition(int*a , int low, int high)
{
    int pivot = low;
    int i =low+1;
    int j = high;

    int lower_found = -1;
    int upper_found = -1;
 do{
  while(a[i]<= a[pivot])
  {
      i++;
  }

  while(a[j] > a[pivot])
  {
      j--;
  }

  if(i<j)
    swap(a,i,j);


 }while(i<j);

    swap(a,pivot,j);
    return j;

}
void quickSort(int *a, int low , int high)
{
    if(low< high){
    int partitionIndex =partition(a,low,high);
    //j is the correct position now for the pivoted element.
    if(partitionIndex == 0)//pivoted element is at 0th position we just have 1 array to sort, the right side of it.
    {
         quickSort(a,partitionIndex+1,high);
    }

    else if(partitionIndex== high)//pivoted element is at last position we just have 1 array to sort, the left side of it.
    {
          quickSort(a,low,partitionIndex-1);
    }
    else
    {
         quickSort(a,low,partitionIndex-1);
         quickSort(a,partitionIndex+1,high);
    }
    }
    //now we need to call the Quick sort recursively.
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
    int size =11;
    int *arr = new int[size];
    //int arr[]= {3,5,2,13,12,3,2,13,45};
    arr[0] = 7;
    arr[1] = 2;
    arr[2] =11;
    arr[3] =8;
    arr[4] =5;
    arr[5] =3;
    arr[6] =9;
    arr[7] =1;
    arr[8] =6;
    arr[9] =18;
    arr[10]= 2;
    cout <<"Before sorting"<<endl;
    display(arr, size);
    quickSort(arr,0,size-1);
    cout <<"After sorting"<<endl;
    display(arr, size);
    return 0;
}
