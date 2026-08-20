#include<iostream>
#include<string>
using namespace std;

int main(){
    char first[15], middle[15], last[15];
    cout<<"Enter First Name: ";
    cin>>first;
    cout<<"Enter Middle Name (Enter '-' if no middle name): ";
    cin>>middle;
    cout<<"Enter Last Name: ";
    cin>>last;
    if(middle[0] == '-'){
        cout<<first[0]<<". "<<last;
    }
    else{
        cout<<first[0]<<". "<<middle[0]<<". "<<last;
    }
    return 0;
}