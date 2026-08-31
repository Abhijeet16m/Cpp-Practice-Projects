#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age >= 18){
        cout<<"Eligible for Voting";
    }
    else{
        cout<<"Not eligible for Voting";
    }
    return 0;
}