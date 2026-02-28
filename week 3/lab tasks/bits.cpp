#include<iostream>
using namespace std;
main(){
int mb;
float bits;
cout<<"Enter the size in megabytes(MB) :";
cin>>mb;
bits=mb *1024*1024*8;
cout<<mb<<"is equivalent to "<<bits<<" bits"<<endl;
}