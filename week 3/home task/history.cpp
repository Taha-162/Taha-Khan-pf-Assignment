#include<iostream>
using namespace std;
main(){
int age;
int move;
int avg;
cout<<"Enter the Person's age :";
cin>>age;
cout<<"Enter the no of times they have moved from house to another :";
cin>>move;
avg=age/(move+1);
cout<<"The average duration they have spent living in a single house :"<<avg;
}