#include<iostream>
#include<math.h>
#include<utility>
using namespace std;

int main(){
    float a, b, c;
    cout<<"Enter coefficients: ";
    cin>>a>>b>>c;
    float r1 = ((-1*b) + sqrt((b*b) - (4*a*c)))/(2*a);
    float r2 = ((-1*b) - sqrt((b*b) - (4*a*c)))/(2*a);
    cout<<r1<<" "<<r2;
    return 0;
}