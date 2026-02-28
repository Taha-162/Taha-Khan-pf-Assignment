#include<iostream>
using namespace std;
main(){
float N, M;
float veg_price,frt_price;
int kgveg;
int kgfrt;
float rps;
cout<<"Enter the vegetable price per kilogram :";
cin>>veg_price;
cout<<"Enter The Fruit price per kilogram :";
cin>>frt_price;
cout<<"Enter total kilograms of vegetable :";
cin>>kgveg;
cout<<"Enter total kilogram of fruits :";
cin>>kgfrt;
N=veg_price*kgveg;
M=frt_price*kgfrt;
rps=(N+M)/1.94;
cout<<"The Earning of harvest in Rupees is :"<<rps;
}

