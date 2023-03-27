#include <iostream>
using namespace std;

int main(){

    char grade;
    cout<<" What letter grade?: ";
    cin>> grade;

    switch(grade){
        case'A':
        cout<<"excellent";
        break;
        case'B':
        cout<<"good";
        break;
        case'C':
        cout<<"well";
        break;
        case'D':
        cout<<"not bad";
        break;
        case'E':
        cout<<"did not good";
        break;
        case'F':
        cout<<"fail";
        break;
        default:
        cout<<"Please only enter in a letter grade (A-F)";
        return 0;
        



    }


}