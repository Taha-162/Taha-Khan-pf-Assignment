#include<iostream>
using namespace std;
main(){
int weight;
int cost;
int size;
int price;
int ground;
cout<<"Enter the weight of the fertilizer bag :";
cin>>weight;
cout<<"Enter the cost of bag :"<<"$";
cin>>cost;
cout<<"Enter the size of the area the bag can cover :";
cin>>size;
price=cost/weight;
cout<<"The price of the fertilizer for each pound :"<<price<<"$"<<endl;
ground=cost/size;
cout<<"The cost of using the fertilizer for each square foot of the garden :"<<ground<<"$";
}


