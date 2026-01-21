#include <iostream>
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
    Info(string name=" ",int height=0,int weight=0){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};

bool cmp(Info a,Info b){
    if(a.height==b.height) return a.weight>b.weight;
    return a.height<b.height;
}

int main() {
    cin >> n;
    Info people[n];
    for (int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        people[i]=Info(name,height,weight);
    }
    sort(people,people+n,cmp);

    for(int i=0;i<n;i++){
        cout<<people[i].name<<" "<<people[i].height<<" "<<people[i].weight<<endl;
    }

    // Please write your code here.

    return 0;
}