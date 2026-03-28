#include<iostream>
using namespace std;
main(){
    int index[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"the Number " <<(i+1)<< " is:"<<endl;
        cin>>index[i];
    }
    cout<<"The 2nd & 4th number is :"<<index[1]<<" and "<<index[3]<<"\n";



}
    