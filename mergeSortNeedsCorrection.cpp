
#include <iostream>

using namespace std;

/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>

int size =7;
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

void display(int* arr, int size)
{
    for(int i =0 ; i<size ;i++)
    {
        cout<<"element at "<<i <<"th position: "<<arr[i]<<endl;
    }
}

void merge(int *a, int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    //int length= high - low +1;
    int b[high+1];
    int k=low;
    while(k<=high)
    {
        if(a[i]<=a[j])
        {

            if(i<= mid)
            {
                b[k]= a[i];
                 i++;
                 k++;
            }
            else
                break;
        }
        else if(a[j]<a[i])
        {

            if(j<=high)
            {

              b[k]= a[j];
               j++;
               k++;
            }
            else
                break;
        }
    }

    if(i>mid)
    {
       b[k]= a[j];
       k++;
       j++;
    }
    if(j>high)
    {
        while(i<=mid)
        {
            b[k]= a[i];
            k++;
            i++;
        }
    }

    for(int i=low; i<=high; i++)
    {
        a[i]=b[i];
    }
}
void MergeSort(int * a, int low,int high)
{

    if(low< high)
    {
        int mid = (low+high)/2;
        MergeSort(a,low, mid);
        MergeSort(a,mid+1, high);

        merge(a,low,mid,high);
    }
}

int main()
{
    //int size =10 ;
    int arr[]={7,2,11,8,5,3,9,1,120,18,11,1201,1};
    cout <<"Before sorting"<<endl;
    display(arr, size);
   MergeSort(arr,0,size-1);
    cout <<"final outcome After sorting"<<endl;
    display(arr, size);
    return 0;
}
