#include <iostream>
#include<iomanip>
using namespace std;

float salary(float base,float score, float experience);
bool value=true;

main(){
    float base,score,experience;

    cout<<"Enter the base salary  : ";
    cin>> base;

    cout<<"Enter the score : ";
    cin>>score;

    cout<<"Enter the experince : ";
    cin>>experience;
   
   float final_salary=salary(base,score,experience);

   if (value==false){
    cout<<"Enter no in the range [0-100] ";
    return 0;
   }

   cout<<"The salary after adding the bonus "<<fixed <<setprecision(0)<< final_salary ;

}

float salary(float base,float score, float experience){
    if(score>0 && score<100){
    if(score>=90){
        base=base+(base*(20/100.0));
    }
    else if(score>74 && score <90){
        base=base+(base*(10/100.0));
    }
    else {
        base=base+(base*(5/100.0));
    }
    }
    else{
        bool value=false;
        return value;
        
    }


    if(experience>=5){
         base=base+(base*(5/100.0));
    }
     else{
        base;
    }
    
    return base;
    
}
