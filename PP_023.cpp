#include<iostream>
using namespace std;

int main(){
    int date, month, year;
    cout<<"Date: ";
    cin>>date;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;
    if((year <= 0) || (month <= 0 || month > 12) || (date <= 0 || date > 31)){cout<<"Invalid year";}
    else{
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout<<"Valid Date";
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(date > 30){
                    cout<<"Invalid Date";
                }
                else{
                    cout<<"Valid Date";
                }
            case 2:
                int lim = 28;
                if(year%4 == 0 && year%100 != 0 || year%400 == 0){lim++;}
                if(date>lim){
                    cout<<"Invalid Date";
                }
                else{
                    cout<<"Valid Date";
                }
        }
    }
    return 0;
}