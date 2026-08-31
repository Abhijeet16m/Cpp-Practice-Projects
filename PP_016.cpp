#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    if(c >= 'A' && c <= 'Z'){
        c += ('a' - 'A');
    }
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";
        break;
    default:
        if(c >= 'a' && c <= 'z'){
            cout<<"Consonant";
        }
        else{
            cout<<"Not a valid character";
        }
        break;
    }
    return 0;
}