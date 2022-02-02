#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data[10];
    Node* next;
    Node(int x[])
    {
        for(int i=0;i<10;i++)
        {
            data[i]=x[i];
        }
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enQueue(int x[])
    {
        Node* temp = new Node(x);
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deQueue()
    {
        if (front == NULL)
            return;
            Node* temp = front;
            front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
    void display()
    {
        for(int i=0;i<10;i++)
        {
            cout<<front->data[i]<<"\n";
        }
    }
};

int main()
{
    Queue q[2];
    int ch[10],flag,app;
    char ord;
    for(int j=0;j<2;j++)
    {
        cout<<"                        WELCOME          \n";
        cout<<"OUR DELIVERY OPTIONS:\n1.PRESTIGE SHANTINIKETAN\n2.PRESTIGE TRANQUALITY\n3.BRIGADE METROPOLISE\n4.GOPALAN MILLENIUM\n5.EMPYRIEN\n6.HOPE FARM JUNCTION\n7.HOODI CIRCLE\n";
        cout<<"Enter your location choice:\n";
        cin>>app;
        if(app>=0&&app<=7)
        {
            cout<<"--------------------------MENU---------------------\n";
            cout<<"101:MARGARITA\n102.SUN KISSED CLASSIC\n103:CHEEZE AND CORN\104:MEXICAN DELIGHT\n105:FARM FRESH\n106:COUNTRY SPECIAL\n107:PERI PERI\n108:MEXICAN NACHOOS CLASSIC\n109:TEXAS BARBEQUE\n110:CHICKEN TIKKA CLASSIC\n111:CRISPY POLO PESTO CLASSIC\n";
            for(int i=0;i<10;i++)
            {
                flag=0;
                cin>>ch[i];
                if(ch[i]>=101&&ch[i]<=111)
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                q[j].enQueue(ch);
                cout<<"Confirming the order:\n";
                q[j].display();
            }
            else
            {
                cout<<"WRONG CHOICE!!!";
            }
        }
        else
        {
            cout<<"Sorry your option is out of bounds for our delivery option.\n";
        }
        cout<<"                    THANK YOU!!!";
    }
    for (int i=0;i<2;i++)
    {
         cout<<"Dear customer,\n Did you receive your order?";
         cin>>ord;
         if(ord=='yes')
            {
                q[i].deQueue();
            }
        cout<<"Order successfully completed!!";
    }
    return 0;
}
