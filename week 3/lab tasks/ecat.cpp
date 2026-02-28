#include<iostream>
using namespace std;
main(){
string name;
int matricmarks;
int intermarks;
int ecatmarks;
float aggregate;
cout<<"enter the student's name :";
cin>>name;
cout<<"enter matriculation marks out of 1100 :";
cin>>matricmarks;
cout<<"enter intermediate marks out of 550 :";
cin>>intermarks;
cout<<"enter Ecat marks out of 400 :";
cin>>ecatmarks;
aggregate=(intermarks/550.0 *0.50) + (matricmarks/1100.0 *0.10) + (ecatmarks/400.0 *0.50);
cout<<"aggregate score for Rehman is :"<<aggregate*100<<endl;
}

