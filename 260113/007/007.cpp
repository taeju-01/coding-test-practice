#include <iostream>
#include <string>
#include <tuple>

using namespace std;

class info{
    public:
    string secret_code;
    char meeting_point;
    int time;

    info(string secret_code,char meeting_point,int time){
        this->secret_code=secret_code;
        this->meeting_point=meeting_point;
        this->time=time;
    }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;
    cin >> secret_code >> meeting_point >> time;
    info info1=info(secret_code,meeting_point,time);
    cout<<"secret code : "<<info1.secret_code<<endl;
    cout<<"meeting point : "<<info1.meeting_point<<endl;
    cout<<"time : "<<info1.time<<endl;
    


    // Please write your code here.

    return 0;
}