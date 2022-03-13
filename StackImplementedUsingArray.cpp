#include <iostream>

using namespace std;

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class stack
{
   public:
   int *arr;
   int size;
   int top=-1;
   void push(int element)
   {

       arr[++top]=element;
   }

    int pop()
   {

       return arr[top--];
   }

   int peek(int loc)
   {
       return arr[loc];
   }

   stack(int size )
   {
       arr = new int[size];
       this->size = size;
   }

   ~stack ()
   {

       delete[] arr;
   }

};

display(stack s)
{
    for(int i=s.top; i>=0;i--)
    {
        cout<<s.arr[i]<<endl;
    }
}
int main()
{
    stack s1(20);
    for(int i =0; i<10 ; i++)
    {
         s1.push(i);
         cout<<"top :"<< s1.top<<endl;
    }

    cout<<"original stack"<<endl;
   display(s1);

   s1.pop();

   cout<<"display after a pop"<<endl;
   cout<<"top:"<<s1.top<<endl;
    display(s1);

    s1.push(90);

    cout<<"display after a 90 is pushed"<<endl;
    cout<<"top:"<<s1.top<<endl;
    display(s1);

    cout<<"top element is: "<<s1.peek(s1.top)<<endl;;
    return 0;
}
