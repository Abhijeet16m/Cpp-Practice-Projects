#include<iostream>
using namespace std;

int main(){
    float marks[5];
    float m;
    for(int i = 0; i < 5; i++){

        while(1){
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>m;
            if(m < 0 || m > 100){
                cout<<"Invalid marks";
            }
            else{
                marks[i] = m;
                break;
            }
        }
    }
    float avg = 0;
    for(int i = 0; i < 5; i++){
        avg += marks[i];
    }
    avg /= 5;
    cout<<"Percentage = "<<avg;
    return 0;
}