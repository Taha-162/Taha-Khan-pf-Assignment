#include<iostream>
using namespace std;
main(){
int vi;
int vf;
int acc;
int t;
cout<<"Enter Initial Velocity (m/s) : ";
cin>>vi;
cout<<"Enter Acceleration (m/s^2) : ";
cin>>acc;
cout<<"Enter Time : ";
cin>>t;
vf= (acc*t)+vi;
cout<<"Final Velocity : "<<vf;
}

