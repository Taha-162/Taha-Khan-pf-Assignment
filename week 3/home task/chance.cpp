#include<iostream>
using namespace std;
main(){
float impostercount;
int playercount;
int chance;
cout<<"Enter imposter count : ";
cin>>impostercount;
cout<<"Enter playercount : ";
cin>>playercount;
chance=100*(impostercount/playercount);
cout<<"Chance of being Imposter is :"<<chance<<"%";
}

