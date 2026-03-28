#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    string names[n];
    cout << "Enter names:\n";
    for(int i = 0; i < n; i++){
        cin >> names[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(names[j] > names[j + 1]){
                // swap
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    cout << "Names in alphabetical order:\n";
    for(int i = 0; i < n; i++){
        cout << names[i] << endl;
    }
    return 0;
}