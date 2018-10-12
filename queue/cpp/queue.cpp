// add your code here

#include <iostream>

using namespace std;
struct Queue
{
    int data;
    Queue*next;
};

int main()
{
    Queue*head=NULL;// will point to starting point of queue
    Queue*rear=NULL;// will point to last point of queue
    Queue *create_element(int t);// to allocate space for the new element
    Queue *enQueue(Queue*,int);// to enqueue the element into queue
    Queue *deQueue(Queue*);// to dequeue the element
    void show(Queue*);// to display the elements of the queue
    int t;
    int choice;char option;
    do
    {
        cout<<"1.To enter into queue\n";
        cout<<"2.To remove from queue\n";
        cout<<"3.To display queue\n";
        cin>>choice;
        switch(choice)
        {
            case 1:     cout<<"Enter the data:\t";
                        cin>>t;
                        Queue *s;
                        s=create_element(t);
                        if(rear==NULL && head==NULL)
                        {
                            head=rear=s;
                        }
                        else
                        {
                            rear=enQueue(rear,t);
                        }
                        break;
            case 2:
                        if(rear==NULL && head==NULL)
                        {
                            cout<<"\nCannot delete Queue is already empty";
                        }
                        else
                        {
                                head=deQueue(head);
                        }
                        break;
            case 3:     show(head);
                        break;
            default:    cout<<"\n Not a valid option\n";
                        break;
        }
        cout<<"\n Want to continue Y/N:\t";cin>>option;
    }while(option=='y'|| option=='Y');

    return 0;
}
Queue*create_element(int t)
{
    Queue *s;
    s=new Queue;
    s->data=t;
    s->next=NULL;
    return s;
}
Queue *enQueue(Queue *rear,int t)
{
        Queue *s=create_element(t);
        rear->next=s;
        rear=s;
        return rear;

}
Queue*deQueue(Queue *head)
{

        head=head->next;
        return head;

}
void show(Queue *head)
{
    cout<<"\n";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;// to traverse the whole queue
    }
    cout<<"\n";
}
