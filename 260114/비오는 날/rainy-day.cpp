#include <iostream>
#include <string>

using namespace std;

class Data{
    public:
    string date;
    string day;
    string weather;

    Data(string date=" ",string day=" ",string weather=" "){
        this->date=date;
        this->day=day;
        this->weather=weather;
    }

};

int main() {
    int n;
    string date;
    string day;
    string weather;
    Data str[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date >> day >> weather;
        str[i]=Data(date,day,weather);
    }
    int cnt=0;
    Data new_str[100];
    for(int i=0;i<n;i++){
        if(str[i].weather=="Rain"){
            new_str[cnt]=str[i];
            cnt++;
        }
    }
    int min=0;
    for(int i=1;i<cnt;i++){
        if(new_str[min].date>new_str[i].date){
            min=i;
        }
    }
    cout<<new_str[min].date<<" "<<new_str[min].day<<" "<<new_str[min].weather;
    // Please write your code here.

    return 0;
}