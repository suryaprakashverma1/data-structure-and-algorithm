
#include <iostream>

using namespace std;

/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>



/////////////////////////////////////CORRECTION IS DONE NOW////////////////////////////////////////////

int size =13;
void display(int* arr, int size);
void displayRange(int* arr, int low, int high)
{
    for(int i =low ; i<=high ;i++)
    {
        cout<<"element at "<<i <<"th position: "<<arr[i]<<endl;
    }
}
void swap(int *a, const int i, const int j)
{
    int temp =a[i];
    a[i]=a[j];
    a[j] = temp;
}
using namespace std;
void SelectionSort(int* a, int size)
{
    for(int i=0;i<size-1;i++)
    {

         for(int j=i+1; j < size; j++)
        {

                if(a[j]<a[i])
                {
                    swap(a,i,j);
                }

        }
    }


}


int partition(int*a , int low, int high)
{

    int pivot = low;
    int i =low+1;
    int j = high;

    int lower_found = -1;
    int upper_found = -1;
    while(j>=i)//break when j is less that i
    {

        if(a[j] >= a[pivot])//keep moving till the time you get a number smaller that pivot
        {
            j--;
        }
        else
        {
           lower_found =j;
        }

        if(a[i] < a[pivot])//keep moving till the time you get a number greater or equal to pivot.
        {
            i++;
        }
        else
        {
            upper_found=i;
        }

        if(lower_found !=-1 && upper_found != -1)
        {
            if(i<j)
            {
                cout<<"i: "<<i <<" and j: "<<j<<endl;
                cout<<"ai: "<<a[i] <<" and aj: "<<a[j]<<endl;
                swap(a,i,j);
                cout<<"Display after swap"<<endl;
                displayRange(a,low,high);
            }
            lower_found =-1;
            upper_found = -1;
        }
    }

    cout<<"Display before pivot Swap "<<endl;
     displayRange(a,low,high);

    cout<<"Display after pivot Swap "<<endl;
    swap(a,pivot,j);
    displayRange(a,low,high);
    return j;

}
void quickSort(int *a, int low , int high)
{
  //low< high takes care of the corner cases so we can comment the extra contion checks we had.
    if(low< high){
    int partitionIndex =partition(a,low,high);
    cout<<"partition Index: "<<partitionIndex<<endl;
    //j is the correct position now for the pivoted element.
   /* if(partitionIndex == 0)//pivoted element is at 0th position we just have 1 array to sort, the right side of it.
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
    }*/

    quickSort(a,low,partitionIndex-1);
    quickSort(a,partitionIndex+1,high);
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
    //int size =10 ;
    int *arr = new int[10];
    arr[0] = 7;
    arr[1] = 2;
    arr[2] =11;
    arr[3] =8;
   arr[4] =5;
    arr[5] =3;
    arr[6] =9;
     arr[7] =1;
    arr[8] =120;
    arr[9] =18;
    arr[10] =11;
    arr[11] =1201;
    arr[12] =1;
    cout <<"Before sorting"<<endl;
    display(arr, size);
    quickSort(arr,0,size-1);
    cout <<"final outcome After sorting"<<endl;
    display(arr, size);
    return 0;
}
