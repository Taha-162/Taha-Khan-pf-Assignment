#include<iostream>
#include<string>
using namespace std;
int main(){
    string productNames[4];
    int price[4], quantity[4];
    for(int i=0;i<4;i++){
        cout<<"Enter name of Product "<< i+1 <<" : ";
        cin>>productNames[i];
        cout<<"Enter Price of "<<productNames[i]<<" : ";
        cin>>price[i];
        cout<<"Enter quantity of "<<productNames[i]<<" : ";
        cin>>quantity[i];
    }
    cout<<"Product Inventory Report "<<endl;
    cout<<"--------------------------"<<endl;

    for(int i =0;i<4;i++){
        cout<<productNames[i]<<" : "<<price[i]<<" , "<<quantity[i]<<" in stock , "<<"Total Value : $"<<price[i]*quantity[i]<<endl;

    }
    return 0;
}