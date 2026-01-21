#include <iostream>
#include <algorithm>
using namespace std;

string name;
int height;
double weight;
class Info{
    public:
    string name;
    int height;
    double weight;

    Info(string name=" ",int height=0,double weight=0){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};

bool cmp_name(Info a,Info b){
    return a.name < b.name;
}

bool cmp_height(Info a,Info b){
    return a.height>b.height;
}


int main() {
    Info people[5];
    for (int i = 0; i < 5; i++) {
        cin >> name >> height >> weight;
        people[i]=Info(name,height,weight);
    }

    sort(people,people+5,cmp_name);
    cout<<"name"<<endl;
    for(int i=0;i<5;i++){
        cout<<people[i].name<<" "<<people[i].height<<" "<<people[i].weight<<endl;
    }
    cout<<endl;
    sort(people,people+5,cmp_height);
    cout<<"height"<<endl;
    for(int i=0;i<5;i++){
        cout<<people[i].name<<" "<<people[i].height<<" "<<people[i].weight<<endl;
    }

    // Please write your code here.

    return 0;
}