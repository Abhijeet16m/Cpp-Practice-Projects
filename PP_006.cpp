#include<iostream>
using namespace std;

int main(){
    float base, allowance, deduction;
    cout<<"Enter base salary: ";
    cin>>base;
    cout<<"Enter allowance: ";
    cin>>allowance;
    cout<<"Enter deduction: ";
    cin>>deduction;
    float gross = base + allowance - deduction;
    cout<<"Gross Salary = "<<gross<<endl;
    return 0;
}
