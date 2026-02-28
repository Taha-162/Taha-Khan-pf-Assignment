#include<iostream>
using namespace std;
main(){
int n;
int w;
int h;
int total_walls;
cout<<"Enter the no of square meter You can paint :";
cin>>n;
cout<<"Enter the width of wall (in meter) :";
cin>>w;
cout<<"Enter the heights of wall (in meter) :";
cin>>h;
total_walls= n/(w*h);
cout<<"The no of complete walls that you can paint :"<<total_walls;
}


