#include<iostream>
using namespace std;

class Math{
    public:
        static int LCM(int a, int b){
            int x = a, y = b;
            while(x != y){
                if(x < y){
                    x += a;
                }
                else{
                    y += b;
                }
            }
            return x;
        }
};

int main(){
    int a, b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<": "<<Math::LCM(a, b);
}