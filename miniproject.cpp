#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class Node
{
    public:
    string name,address,bus_no,reservation,contact,fare,vehicle_model,color,Driver,to,from,seat;
    Node*next;
};

class bus
{
    public:
    Node*head;
    Node*rear;
    Node*top;
    Node*front;
    public:
    bus()
    {
        head=NULL;
        rear=NULL;
        top=NULL;
        front=NULL;
    }
    void main_menu();
    void add_bus();
    void Deletee();
    void modifyy();
    void searchh();
    void route();
    void update_route();
    void bus_fare();
    void Reservation();
    void cancel_Reservation();
    void Enqueue();
    void Dequeue();
    void Display_Queue();
    void Display_Stack();
    void display();

};
void bus::main_menu()
{
                                 system("cls");
                                 cout<<"\t\t\t\t\t***********************************"<<endl;
                                 cout<<"\t\t\t\t\t*          MAIN MENU              *"<<endl;
                                 cout<<"\t\t\t\t\t***********************************"<<endl;
                                 cout<<endl;
                                 cout<<endl;
                                 cout<<"\t\t<1>.  Add Bus"                             <<endl;
                                 cout<<"\t\t<2>.  Delete Record"                       <<endl;
                                 cout<<"\t\t<3>.  Modify Record"                       <<endl;
                                 cout<<"\t\t<4>.  Search Record"                       <<endl;
                                 cout<<"\t\t<5>.  Define Bus Route"                    <<endl;
                                 cout<<"\t\t<6>.  Update Routes"                       <<endl;
                                 cout<<"\t\t<7>.  Define Bus Fare"                     <<endl;
                                 cout<<"\t\t<8>.  Seat Reservation Stack"              <<endl;
                                 cout<<"\t\t<9>.  Cancel Reservation Stack"            <<endl;
                                 cout<<"\t\t<10>.  Display"                            <<endl;
                                 cout<<"\t\t<11>.  Enqueue"                            <<endl;
                                 cout<<"\t\t<12>.  Dequeue"                            <<endl;
                                 cout<<"\t\t<13>.  Display in Queue"                   <<endl;
                                 cout<<"\t\t<14>.  Display in Stack"                   <<endl;
                                 cout<<"\t\t<15>.  Exit"                               <<endl;
                                 int choice1;
                                 cout<<"\t\t"<<"Enter Your Choice:";
                                 cin>>choice1;
                                 switch(choice1)
                                 {
                                    case 1:
                                    {
                                        add_bus();
                                        main_menu();
                                        break;
                                    }
                                    case 2:
                                    {
                                        Deletee();
                                        main_menu();
                                        break;
                                    }
                                    case 3:
                                    {
                                        modifyy();
                                        main_menu();
                                    }
                                    case 4:
                                    {
                                        searchh();
                                        main_menu();
                                        break;
                                    }
                                    case 5:
                                    {
                                        route();
                                        main_menu();
                                        break;
                                    }
                                    case 6:
                                    {
                                        update_route();
                                        main_menu();
                                        break;
                                    }
                                    case 7:
                                    {
                                        bus_fare();
                                        main_menu();
                                        break;
                                    }
                                    case 8:
                                    {
                                        Reservation();
                                        main_menu();
                                        break;

                                    }
                                    case 9:
                                    {
                                        cancel_Reservation();
                                        main_menu();
                                        break;
                                    }
                                    case 10:
                                    {
                                        display();
                                        break;

                                    }
                                    case 11:
                                    {
                                        Enqueue();
                                        main_menu();
                                        break;
                                    }
                                    case 12:
                                    {
                                        Dequeue();
                                        main_menu();
                                        break;
                                    }
                                    case 13:
                                    {
                                        Display_Queue();
                                        main_menu();
                                        break;
                                    }
                                    case 14:
                                    {
                                        Display_Stack();
                                        main_menu();
                                        break;

                                    }
                                    case 15:
                                    {
                                        system("pause");
                                        break;
                                    }
                                 }
}  //end of main menu

void bus::add_bus()
{
    system("cls");
    Node*temp= new Node;
    cout<<"enter Bus Number "<<endl;
    cin>>temp->bus_no;
    cout<<"enter Model Number"<<endl;
    cin>>temp->vehicle_model;
    cout<<"enter Driver Name"<<endl;
    cin>>temp->Driver;
    cout<<"enter Bus Color"<<endl;
    cin>>temp->color;
    temp->next=NULL;
    if(head==NULL)
    {
        head = temp;
        cout<<"Information inserted successfully "<<endl;

    }
    else         // if head is not NULL we will make pointer of head
    {
        Node*ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;

        }
        ptr->next=temp;
        cout<<"Information inserted successfully "<<endl;
    }

    system("pause");
    main_menu();
}//End of ADD BUS

void bus::Deletee()
{
    system("cls");
    string no;
    Node *temp= new Node();
    if(head==NULL)
    {
      cout<<"No record found || linked list is empty"<<endl;
      system("pause");
      main_menu();
    }
    else{
        cout<<"enter Bus number to Delete Record "<<endl;
        cin>>no;

        if(head->bus_no==no)
        {
            temp=head;
            head=head->next;
            delete(temp);
            cout<<"Delete Record Successfully......"<<endl;
            system("pause");
            main_menu();

        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                if(temp->next->bus_no==no)
                {
                    Node *new_node=new Node();
                    new_node=temp->next;
                    temp->next=temp->next->next;
                    delete(new_node);
                    system("pause");
                    main_menu();
                }
                temp=temp->next;
            }
            cout<<"Delete record successfully......."<<endl;
            system("pause");
            main_menu();
        }
    }
}
// END OF DELETE BUS 
void bus::modifyy()
{
    system("cls");
    string no;
    if(head==NULL)
    {
        cout<<"NO Record found || Linklist is empty"<<endl;
        system("pause");
        main_menu();
    }
    else
    {
        cout<<"Enter Bus number to modify Record "<<endl;
        cin>>no;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->bus_no==no)
            {
                cout<<"Enter Model Number"<<endl;
                cin>>ptr->vehicle_model;
                cout<<"Enter Driver name"<<endl;
                cin>>ptr->Driver;
                cout<<"Enter bus color"<<endl;
                cin>>ptr->color;
                cout<<"\n\n\t\t RECORD MODIFY SUCCESSFULYY \t\t\n\n";
                system("pause");
                main_menu();
            }
            ptr=ptr->next;
            if(ptr->bus_no!=no)
            {
                cout<<"no record found .....enter correct BUS NEMBER"<<endl;
                system("pause");
                main_menu();
            }
        }

    }
}//END OF MODIFY RECORD

void bus::searchh()
{
    system("cls");
    string no;
    if(head==NULL)
    {
        cout<<"No Record exist"<<endl;
        system("pause");
        main_menu();
    }
    else
    {
        cout<<"Enter Bus Numberto search record"<<endl;
        cin>>no;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->bus_no==no)
            {
                cout<<"BUS NUMBER             "<<ptr->bus_no<<endl;
                cout<<"DRIVER NAME            "<<ptr->Driver<<endl;
                cout<<"BUS MODEL NUMBER       "<<ptr->vehicle_model<<endl;
                cout<<"BUS COLOR              "<<ptr->color<<endl;

                system("pause");
                main_menu();
            }
            ptr=ptr->next;
            if(ptr->bus_no!=no)
            {
                cout<<"No record found enter correct Bus Number"<<endl;
                system("pause");
                main_menu();
            }
        }
    }
}//END OF SEARCH
void bus::route()
{
    system("cls");
    string no;
    if(head==NULL)
    {
        cout<<"No record exist"<<endl;
        system("pause ");
        main_menu();
    }
    else
    {
        cout<<"Enter Bus Number to Define Route"<<endl;
        cin>>no;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->bus_no==no)
            {
                cout<<"FROM! Enter place where do you want to go"<<endl;
                cin>>ptr->from;
                cout<<"TO! Enter your Destination"<<endl;
                cin>>ptr->to;
                cout<<"\n\n\t\t\t ROUTE INSERTED SUCESSFULLY \t\t\n\n";
                system("pause");
                main_menu();
            }
            ptr=ptr->next;
            if(ptr->bus_no!=no)
            {
                cout<<"No record found,,,please enter the correct BUS  NUMBER"<<endl;
                system("pause");
                main_menu();
            }
        }

    }
}//END OF ROUTE

void bus::update_route()
{
    system("cls");
    string no;
    if(head==NULL)
    {
        cout<<"No record found || linklist is empty"<<endl;
        system("pause");
        main_menu();
    }
    else
    {
        cout<<"Enter BUS NUMBER to update ROUTE"<<endl;
        cin>>no;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->bus_no==no)
            {
                cout<<"FROM! Enter place where do you want to Go"<<endl;
                cin>>ptr->from;
                cout<<"TO! Enter your Destination "<<endl;
                cin>>ptr->to;

                cout<<"\n\n\t\t  RECORD update successfully \t\t\n\n";
                system("pause");
                main_menu();
            }
            ptr=ptr->next;
            if(ptr->bus_no!=no)
            {
                cout<<"No record found ,,please enter correct BUS NUMBER"<<endl;
                system("pause");
                main_menu();
            }
        }
    }
}//END OF UPDATE ROUTES

void bus::bus_fare()
{
    system("cls");
    Node*temp=new Node;
    temp=head;
    cout<<"\n We are offering bus services in following cities \n"<<endl;
    cout<<"Want to check fare press 1\2\3\4\5\6"<<endl;
    cout<<"  <1>. islamabad to lahore "        <<endl;
    cout<<"  <2>. islamabad to karachi"        <<endl;
    cout<<"  <3>. islamabad to Hunza"          <<endl;
    cout<<"  <4>. lahore to karachi"           <<endl;
    cout<<"  <5>. lahore to Hunza "            <<endl;
    cout<<"  <6>. karachi to Hunza"            <<endl;
    int choice;
    cout<<"enter your choice";
    cin>>choice;

    if(choice==1)
    {
        cout<<"\t\t islamabad to lahore \t\t"  <<endl;
        cout<<"\t\t Rs. 3000 \t\t"<<endl;
        system("pause");
        main_menu();
    }
    else if(choice==2)
    {
        cout<<"\t\t islamabad to karachi \t\t"  <<endl;
        cout<<"\t\tRs. 7000 \t\t"<<endl;
        system("pause");
        main_menu();
    }
    else if(choice==3)
    {
        cout<<"\t\t islamabad to Hunza \t\t"  <<endl;
        cout<<"\t\tRs. 6000\t\t"<<endl;
        system("pause");
        main_menu();
    }
    else if(choice==4)
    {
        cout<<"\t\t lahore to karachi \t\t"  <<endl;
        cout<<"Rs. 5000"<<endl;
        system("pause");
        main_menu();
    }
    else if(choice==5)
    {
        cout<<"\t\t lahore  to Hunza \t\t"  <<endl;
        cout<<"Rs. 8000"<<endl;
        system("pause");
        main_menu();
    }
    else if(choice==6)
    {
        cout<<"\t\t karachi to Hunza  \t\t"  <<endl;
        cout<<"\t\tRs. 100000\t\t"<<endl;
        system("pause");
        main_menu();

    }
    system("pause");
    main_menu();
}//END OF BUS FARE

void bus::Reservation()
{
    system("cls");
    Node*temp=new Node;
    cout<<"Enter your name"<<endl;
    cin>>temp->name;
    cout<<"emter your contact number"<<endl;
    cin>>temp->contact;
    cout<<"Enter your address"<<endl;
    cin>>temp->address;
    temp->next=top;
    top=temp;
    cout<<"\t\t\t***************************************"<<endl;
    cout<<"\t\t\t*      RESERVATION SUCCESSFULL        *"<<endl;
    cout<<"\t\t\t***************************************"<<endl;
    system("pause");
    main_menu();
}//  END OF RESERVATION
void  bus::cancel_Reservation()
{
    system("cls");
    Node*ptr=top;
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
        system("pause");
        main_menu();
    }
    else
    {
        top=top->next;
        delete(ptr);
        cout<<"\t\t Delete Successfully"<<endl;
        system("pause");
        main_menu();
    }
}//END OF CANCEL RESERVATION

void bus::display()
{
    system("cls");
    string no;
    if(head==NULL)
    {
        cout<<"No record is found as linklist is empty"<<endl;
        system("pause");
        main_menu();
    }
    else
    {
        cout<<"enter Bus Number to Display Details "<<endl;
        cin>>no;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->bus_no==no)
            {
                system("cls");
                cout<<"\t\t\t********************************"<<endl;
                cout<<"\t\t\t            Display            *"<<endl;
                cout<<"\t\t\t********************************"<<endl;
                cout<<endl;
                cout<<"Bus Number                  "<<ptr->bus_no<<endl;
                cout<<"Driver Name                 "<<ptr->Driver<<endl;
                cout<<"Bus Model Number            "<<ptr->vehicle_model<<endl;
                cout<<"Bus Color                   "<<ptr->color<<endl;

                cout<<"\t\t\t********************************"<<endl;
                cout<<"\t\t\t*       ROUTE                  *"<<endl;
                cout<<"\t\t\t********************************"<<endl;
                cout<<endl;
                cout<<"FROM                 "<<ptr->from<<endl;
                cout<<"TO                   "<<ptr->to<<endl;
                cout<<endl;
                cout<<"\t\t\t********************************"<<endl;
                cout<<"\t\t\t*            FARE              *"<<endl;
                cout<<"\t\t\t********************************"<<endl;
                cout<<"endl";
                cout<<"  islamabad to lahore  ->->     Rs 3000"    <<endl;
                cout<<"  islamabad to karachi ->->     Rs 7000"    <<endl;
                cout<<"  islamabad to Hunza   ->->     Rs 6000"    <<endl;
                cout<<"  lahore to karachi    ->->     Rs 5000"    <<endl;
                cout<<"  lahore to  Hunza     ->->     Rs 8000"    <<endl;
                cout<<"  karachi to Hunza     ->->     Rs 10000"   <<endl;
                cout<<endl;
                system("pause");
                main_menu();

            }
            ptr=ptr->next;
            if(ptr->bus_no!=no)
            {
                cout<<"No record found ,,please enter correct Bus Number "<<endl;
                system("pause");
                main_menu();
            }
        }

    }
}
void bus::Enqueue()
{
    system("cls");
    Node*temp=new Node;
    cout<<"Enter Bus Number"<<endl;
    cin>>temp->bus_no;
    cout<<"Enter Model Number"<<endl;
    cin>>temp->vehicle_model;
    cout<<"Enter Driver Name "<<endl;
    cin>>temp->Driver;
    cout<<"Enter Bus Color "<<endl;
    cin>>temp->color;
    temp->next=NULL;
    if(front==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
    cout<<"Information inserted successfully "<<endl;
    system("pause");
    main_menu();
    }

    void bus::Dequeue()
    {
        system("cls");
        if(front==NULL || rear == NULL)
        {
            cout<<"No record found as linklist is empty"<<endl;
            system("pause");
            main_menu();
        }
        else if(front == rear)
        {
            delete(front);
            front=NULL;
            rear=NULL;
            cout<<"\t\tDequeue Successfully \t\t"<<endl;
            system("pause");
            main_menu();
        }
        else
        {
            Node*temp=front;
            front=front->next;
            delete(temp);
            cout<<"\t\t Dequeue Successfully \t\t"<<endl;
            system("pause");
            main_menu();
        }
    }

    void bus::Display_Queue()
    {
        system("cls");
        Node*ptr=front;
        while(ptr!=NULL)
        {
            cout<<"\t\t\t*****************************************"<<endl;
            cout<<"\t\t\t*           Display in Queue            *"<<endl;
            cout<<endl;
            cout<<"BUS NUMBER                "<<ptr->bus_no<<endl<<endl;
            cout<<"DRIVER NAME               "<<ptr->Driver<<endl<<endl;
            cout<<"BUS MODEL NUMBER          "<<ptr->vehicle_model<<endl;
            cout<<"BUS COLOR                 "<<ptr->color<<endl;
            ptr=ptr->next;
            system("pause");
            main_menu();
        }
    }

    void bus::Display_Stack()
    {
        system("cls");
        Node*ptr=top;
        if(top==NULL)
        {
            cout<<"stack is empty"<<endl;

        }
        else
        {
            cout<<"\t\t\t*****************************************"<<endl;
            cout<<"\t\t\t*           Display in Stack            *"<<endl;
            cout<<"\t\t\t*****************************************"<<endl;
            cout<<endl;
            cout<<"NAME               "<<ptr->name<<endl;
            cout<<"CONTACT            "<<ptr->contact<<endl;
            cout<<"ADDRESS            "<<ptr->address<<endl;
            system("pause");
            main_menu();

        }
    }
    int main()
    {
        bus b;
        cout<<endl;
        cout<<"\t\t\t\t\t*****************************************\n";
        cout<<"\t\t\t\t\t*             WELCOME                   *\n";
        cout<<"\t\t\t\t\t*                TO                     *\n";
        cout<<"\t\t\t\t\t*           E- CON BUS SERVICE          *\n";
        cout<<"\t\t\t\t\t*****************************************\n";
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t LOADING...";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"<";
        Sleep(100);
        cout<<">";
        Sleep(100);
        cout<<"\n\n\n\t SUCCESSFULLY  ";

        Sleep(600);
        system("cls");
        aa:
        system("cls");
        cout<<"\t\t\t*********************************************"<<endl;
        cout<<"\t\t\t*  SIGN UP/CREATE ACCOUNT                   *"<<endl;
        cout<<"\t\t\t*********************************************"<<endl;
        cout<<endl;
        string name,password,name1,password1;
        cout<<"Enter username"<<endl;
        cin>>name;
        cout<<"Enter Password"<<endl;
        cin>>password;
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<endl;
        cout<<"ACCOUNT CREATE SUCCESSFULLY "<<endl;
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<"*";
        Sleep(100);
        cout<<endl;

        system("cls");
        cout<<"\t\t\t*   LOGIN     *"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"ENTER USERNAME "<<endl;
        cin>>name1;
        cout<<"ENTER PASSWORD "<<endl;
        cin>>password1;
        if(name==name1 && password==password1)
        {
            b.main_menu();
        }
        else
        {
            cout<<" WRONG USERNAME OR PASSWORD !!!!! PLEASE ENTER CORRECT LOGIN ID "<<endl;
            system("pause");
            goto aa;
        }




    }