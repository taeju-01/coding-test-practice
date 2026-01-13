#include <iostream>
#include <string>

using namespace std;

class info{
    public:
    string user2_id;
    int user2_level;

    info(string user2_id="codetree",int user2_level=10){
        this->user2_id=user2_id;
        this->user2_level=user2_level;
    }

};


int main() {
    string user2_id;
    int user2_level;
    cin >> user2_id >> user2_level;

    info info1=info();
    cout<<"user "<<info1.user2_id<<" "<<"lv "<<info1.user2_level<<endl;

    info1.user2_id=user2_id;
    info1.user2_level=user2_level;

    cout<<"user "<<info1.user2_id<<" "<<"lv "<<info1.user2_level<<endl;


    // Please write your code here.

    return 0;
}