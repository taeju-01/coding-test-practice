#include <iostream>
#include <string>

using namespace std;
class Info{
    public:
    string unlock_code;
    char wire_color;
    int seconds;
    Info(string unlock_code,char wire_color,int seconds){
        this->unlock_code=unlock_code;
        this->wire_color=wire_color;
        this->seconds=seconds;
    }
};


int main() {
    string unlock_code;
    char wire_color;
    int seconds;
    cin >> unlock_code >> wire_color >> seconds;
    Info info1=Info(unlock_code,wire_color,seconds);
    cout<<"code : "<<info1.unlock_code<<endl;
    cout<<"color : "<<info1.wire_color<<endl;
    cout<<"second : "<<info1.seconds<<endl;

    // Please write your code here.

    return 0;
}