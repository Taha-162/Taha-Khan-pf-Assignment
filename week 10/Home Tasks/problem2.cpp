#include <iostream>
#include<iomanip>
using namespace std;

void func1(string a, double b);
double func2(double a, double b, double c);

main()
{
    cout << "Enter length,width,height (in metres) : ";
    double a, b, c,v;
    double r;

    cin >> a;
    cin >> b;
    cin >> c;
    r = func2(a, b, c);


    cout << "Enter output unit in (mm,cm,km) : ";
    string s;
    cin >> s;
     func1(s, r);
    
    
}

double func2(double a,double b, double c){
    double v=1/3.0*a*b*c;
    return v;
}

void func1(string a,double b){
    if(a=="mm"){
        cout<<fixed<<setprecision(6)<<b*1000000000;
    }
    else if(a=="cm"){
        cout<<fixed<<setprecision(6)<<b*1000000;
    }
    else if(a=="km"){
        cout<<fixed<<setprecision(6)<<b/1000000000;
    }
    else if(a=="m"){
        cout<<fixed<<setprecision(6)<<b;
    }
    else{
        cout<<"invalid unit" ;
    }

}