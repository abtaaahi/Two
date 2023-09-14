#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    cout<<"Welcome to Online Food Service.\n"<<endl;
    cout<<"Let us know what you are Craving For :3\n-------------------------------------"<<endl;
    cout<<"Enter your Location: ";
    string x;
    getline(cin,x);
    cout<<"\nPress 1 for Menu\nPress 2 for Exit\n"<<endl;
    int a;
    cin>>a;
    if(a<=1)
    {
        cout<<"-------------------------------------"<<endl;
        cout<<"Item\t\tPrice"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"1.Momo\t\t150/=\n2.Noddles\t80/=\n3.Fuchka\t50/=\n4.Burger\t180/=\n5.Pizza\t\t200/=\n6.Bhelpuri\t50/=\n7.Soft Drinks\t25/=\n8.Coffee\t30/=\n9.Water\t\t20/="<<endl;
        cout<<"\nPress your desire item to place order: "<<endl;
        int b;
        cin>>b;
        cout<<"\nYour Ordered has been placed."<<endl;
        cout<<"\nPress 1 to take recipt\nPress 2 to exit the Menu Bar."<<endl;
        int c;
        cin>>c;
        if(c=1)
        {
            switch(b)
            {
            case 1:
                cout<<"\n1* Momo\nCost=150 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 2:
                cout<<"\n1* Noddles\nCost=80 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 3:
                cout<<"\n1* Fuckha\nCost=50 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 4:
                cout<<"\n1* Burger\nCost=180 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 5:
                cout<<"\n1* Pizza\nCost=200 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 6:
                 cout<<"\n1* Bhelpuri\nCost=50 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 7:
                cout<<"\n1* Soft Drinks\nCost=25 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 8:
                 cout<<"\n1* Coffee\nCost=30 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            case 9:
                cout<<"\n1* Water\nCost=20 MRP.\nYour Food will be delivered in "<<x<<" within 30 minutes.\nThank You Sir."<<endl;
                break;
            }
        }
        else
            cout<<"Thank You Sir";
    }
    else
        cout<<"Thank You Sir"<<endl;
}

