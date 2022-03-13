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
   node *prev;
   node(int Data)
   {
       data= Data;
   }

};

void display (node *hNode)
{
    node *ptr =hNode;
    while((ptr->next) !=NULL)
    {
        cout<<ptr->data<<endl;
        ptr =ptr->next;
    }
     cout<<ptr->data<<endl;

    cout<<"reverse traversal"<<endl;
     while((ptr->prev) !=NULL)
    {
        cout<<ptr->data<<endl;
        ptr =ptr->prev;
    }
    cout<<ptr->data<<endl;
}

void insert(node *hNode , int insertat, node *nodetoinsert)
{
   /* node *ptr =hNode;
    for (int i=0; i<insertat ;i++)
    {

        while(i != insertat-1)
        {
            ptr =ptr->next;
            i++;

        }

        nodetoinsert->next =ptr->next;
        ptr->next = nodetoinsert;

    }*/
}

void delnode(node *hNode , int delLoc)
{
   /* node *ptr =hNode;
    int i =0;
    while(i != delLoc-1)
    {

        ptr =  ptr->next;
        i++;
    }
    node *temp =ptr->next;
    ptr->next =ptr->next->next;
    delete(temp);*/
}


int main()
{
   node *head= new node(10);
   node *n2= new node(11);
   head->prev =NULL;
   head->next = n2;
   n2->prev =head;
   node *n3= new node(12);
   n2->next = n3;
   n3->prev =n2;
   node *n4= new node(13);
   n3->next = n4;
   n4->prev = n3;
   node *n5= new node(14);
   n4->next =n5;
   n5->prev = n4;
   n5->next = NULL;
   cout <<"display before insertion"<<endl;
   display(head);
   node *nodetoinsert= new node(90);
   //insert(head,2,nodetoinsert);
   //cout <<"display after insertion"<<endl;
   //display(head);

   //delnode(head,2);
   //cout<<"After Deletion"<<endl;
   //display(head);
    return 0;
}
