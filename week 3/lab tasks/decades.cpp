#include<iostream>
using namespace std;
main(){
int population;
int birthrate;
int decades;
cout<<"Enter the current world population :";
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month) :";
cin>>birthrate;
decades=population + birthrate*12 *30;
cout<<"population in three decades "<<decades;
}


