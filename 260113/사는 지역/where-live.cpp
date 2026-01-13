#include <iostream>

#define MAX_N 10

using namespace std;

int n;
string name, street_address, region;
class Info{
    public:
    string name, street_address,region;

    Info(string name=" ",string street_address=" ",string region=" "){
        this->name=name;
        this->street_address=street_address;
        this->region=region;
    }
};

int main() {
    cin >> n;
    Info info[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> street_address;
        cin >> region;
        info[i]=Info(name,street_address,region);
    }
    int max=0;
    for(int i=1;i<n;i++){
        if(info[i].name>info[max].name){
            max=i;
        }
    }
    cout<<"name "<<info[max].name<<endl;
    cout<<"addr "<<info[max].street_address<<endl;
    cout<<"city "<<info[max].region<<endl;

    // Please write your code here.

    return 0;
}