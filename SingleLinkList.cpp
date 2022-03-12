#include <iostream>

using namespace std;

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class node
{
   public:
   int data;
   node * next;

   node(int Data)
   {
       data= Data;
   }

};

void display (node *hNode)
{
    while((hNode->next) !=NULL)
    {
        cout<<hNode->data<<endl;
        hNode =hNode->next;
    }
}

void insert(node *hNode , int insertat, node *nodetoinsert)
{
    for (int i=0; i<insertat ;i++)
    {

        while(i != insertat-1)
        {
            hNode =hNode->next;
            i++;

        }

        nodetoinsert->next =hNode->next;
        hNode->next = nodetoinsert;

    }
}

void delnode(node *hNode , int delLoc)
{
    int i =0;
    while(i != delLoc-1)
    {

        hNode =  hNode->next;
        i++;
    }
    node *temp =hNode->next;
    hNode->next =hNode->next->next;
    delete(temp);
}


int main()
{
   node *n1= new node(10);
   node *n2= new node(11);
   n1->next = n2;
   node *n3= new node(12);
   n2->next = n3;
   node *n4= new node(13);
   n3->next = n4;
   node *n5= new node(14);
   n4->next =n5;
   n5->next = NULL;
   cout <<"display before insertion"<<endl;
   display(n1);
   node *nodetoinsert= new node(90);
   insert(n1,2,nodetoinsert);
   cout <<"display after insertion"<<endl;
   display(n1);

   delnode(n1,2);
   cout<<"After Deletion"<<endl;
   display(n1);
    return 0;
}
