#include<iostream>
using namespace std;
main(){
int voltage;
int current;
int power;
cout<<"Enter voltage :";
cin>>voltage;
cout<<"Enter current :";
cin>>current;
power=current * voltage;
cout<<"The power is "<<power<<" watts"<<endl;
}