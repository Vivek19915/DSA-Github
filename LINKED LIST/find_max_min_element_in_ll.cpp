#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
//using default argument
// int maxElement(struct node *start,int max = -32768){
//     while (start!=0)
//     {
//         if (max<start->data)
//         {
//             max = start->data;   
//         }
//       start=start->next;      
//     }
//     return max;
// }


int main(){
    struct node *head,*newnode,*temp;
    head = NULL;

    int choice=1;
    while (choice)
    {
        newnode = new struct node;
        cout<<"Enter data"<<endl;
        cin>>newnode->data;
        newnode->next =NULL;
        //🔥🔥🔥taki next node null ho jaye aur jab hum traverse kare to stop 
        //karne ke kaam ayega 🔥🔥🔥🔥
        if (head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"to stop press 0 else press 1"<<endl;
        cin>>choice;
    }
    //fnding max element using loops
    temp = head;
    int max = INT32_MIN; //or max= -32768
    while (temp)
    {
        if (max<temp->data)
        {
            max = temp->data;
        }
        temp=temp->next;
    }
    cout<<max<<endl;


    //finding max element using function
    
    // int z = maxElement(head);
    // cout<<z<<endl;
}