#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name;
int height;
int weight;
class Info{
    public:
    string name;
    int height;
    int weight;

    Info(string name="",int height=0, int weight=0){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};

bool cmp (Info &a,Info &b){
    return a.height<b.height;
}

int main() {
    cin >> n;
    Info student[10];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> height;
        cin >> weight;
        student[i]=Info(name, height,weight);
    }
    sort(student,student+n,cmp);
    for(int i=0;i<n;i++){
        cout<<student[i].name<<" "<<student[i].height<<" "<<student[i].weight<<endl;
    }

    // Please write your code here.

    return 0;
}