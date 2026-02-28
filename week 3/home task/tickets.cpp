#include<iostream>
using namespace std;
main(){
string movie_name;
int at_price,ct_price;
int nat_sold,nct_sold;
int charity_perc,total_amount;
int remaining_amount;
int charity_amount;
cout<<"Enter the movie name :";
cin>>movie_name;
cout<<"Enter the adult ticket's price :""$";
cin>>at_price;
cout<<"Enter the child ticket's price : "<<"$";
cin>>ct_price;
cout<<"Enter the number of adult tickets sold :";
cin>>nat_sold;
cout<<"Enter the number of child tickets sold :";
cin>>nct_sold;
cout<<"Enter the percentage of charity you will give :";
cin>>charity_perc;
total_amount=(at_price *nat_sold)+(ct_price * nct_sold);
cout<<"the total amount obtained is :"<<total_amount<< "\n$";
charity_amount=total_amount*(charity_perc/100.0);
cout<<"The Charity Amount is :"<<charity_amount<<"$\n";
remaining_amount=total_amount - charity_amount;
cout<<"the remaining amount is :"<<remaining_amount<<"$";
}
