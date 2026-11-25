#include<bits/stdc++.h>
using namespace std;

class helper {
    public:
        bool isValid(int month, int year){
            return year > 0 && month >= 1 && month <= 12;
        }
        int numberOfDay(int month, int year){
            vector<int> days = {
                31, 28, 31, 30, 31, 30,
                31, 31, 30, 31, 30, 31
            };
            if (month == 2 &&
                (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                return 29;
            }
            return days[month-1];
        }
        int startingDay(int month, int year) {
            int m = month;
            int y = year;

            if (m < 3) {
                m += 12;
                y--;
            }

            int k = y % 100;
            int j = y / 100;

            int h = (1 + (13 * (m + 1)) / 5 + k +
                    k / 4 + j / 4 + 5 * j) % 7;

            // Convert Zeller's result to Sunday = 0
            return (h + 6) % 7;
        }
};

class Calender: public helper {
    private:
        int month;
        int year;
        vector<vector<string>> cal = vector<vector<string>>(6, vector<string>(7, "   "));
        vector<string> months = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };
        vector<string> weeeks = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
        void initialize(){
            cal.clear();
            cal.resize(6, vector<string>(7, "   "));
            if(!isValid(month, year)){
                time_t now = time(nullptr);
                tm* localTime = localtime(&now);
                month = localTime->tm_mon + 1;
                year = localTime->tm_year + 1900; 
            }
            int start = startingDay(month, year);
            int days = numberOfDay(month, year);
            int i = 0;
            int j = 1;
            while(j <= days){
                string s = to_string(j);
                if(j >= 10) s = " "+s;
                else s = "  "+s;
                cal[i][start] = s;
                j++;
                if(start == 6){
                    start = 0;
                    i++;
                }else{
                    start++;
                }
            }
        }
    public:
        Calender(int month, int year): month(month), year(year)
        {
            this->initialize();
        }

        void showCalender(){
            cout<<months[month-1]<<", "<<year<<endl;
            for(int i = 0; i < 7; i++){
                cout<<weeeks[i]<<" ";
            }
            cout<<endl;
            for(int i = 0; i < 6; i++){
                for(int j = 0; j < 7; j++){
                    cout<<cal[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void prev(){
            if(month == 1){
                month = 12;
                year--;
            }
            else month--;
            initialize();
        }
        
        void next(){
            if(month == 12){
                month = 1;
                year++;
            }
            else month++;
            initialize();
        }
};


int main(){
    Calender calender = Calender(11, 2026);
    calender.showCalender();
    calender.next();
    calender.next();
    calender.showCalender();
    calender.prev();
    calender.showCalender();
    return 0;
}