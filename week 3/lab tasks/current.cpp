#include<iostream>
using namespace std;
main(){
int charge;
int time;
int current;
cout<<"enter the charge q in coulombs :";
cin>>charge;
cout<<"enter the time t in second :";
cin>>time;
current=charge /time;
cout<<" the current is :  "<<current<<endl;
}