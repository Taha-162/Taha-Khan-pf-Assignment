#include<iostream>
#include<string>
using namespace std;
int main(){
    int j;
    int f_n[j],seat[j];
    string Dest;
    cout<<"Enter Number of Flights : ";
    cin>>j;
    int flights[j];
    for(int i =0; i<j;i++){
        cout<<"Enter flight number for flight "<<j+1<<": ";
        cin>>f_n[i];
        cout<<"Enter desitination for flight "<<f_n<<": ";
        cin>>Dest;
        cout<<"Enter seats available for flight "<<f_n<<": ";
        cin>>seat[i];
    }
    cout<<"Flight Information: "<<endl;
    cout<<"-----------------------------"<<endl;
     for(int i =0; i<j;i++){
        cout<<"Flight "<<f_n<<" to "<<Dest<<" has "<<seat<<" seats availabe. "<<endl;
    }
    cout<<"Flight with less than 5 seats avaialbe: ";
    cout<<"------------------------------------------- ";
    bool found = false; 
    for(int i = 0; i < j; i++){
        if(seat[i] < 5){
            cout << "Flight " << f_n[i] << " to " << Dest[i] << " has only " << seat[i] << " seats left!" << endl;
            found = true;
        }
    }
    if(!found){
        cout << "No flights with less than 5 seats available." << endl;
    }
    return 0;
}