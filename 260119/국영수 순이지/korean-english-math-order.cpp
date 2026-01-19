#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name;
int korean;
int english;
int math;

class Info{
    public:
    string name;
    int korean;
    int english;
    int math;
    Info(string name="",int korean=0,int english=0,int math=0){
        this->name=name;
        this->korean=korean;
        this->english=english;
        this->math=math;
    }
};

bool cmp(Info a, Info b){
    if(a.korean != b.korean) return a.korean > b.korean;
    if(a.english != b.english) return a.english > b.english;
    return a.math > b.math;
}

int main() {
    cin >> n;
    Info student[10];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> korean;
        cin >> english;
        cin >> math;
        student[i]=Info(name,korean,english,math);
    }

    sort(student,student+n,cmp);
    for(int i=0;i<n;i++){
        cout<<student[i].name<<" "<<student[i].korean<<" "<<student[i].english<<" "<<student[i].math<<endl;
        
    }

    // Please write your code here.

    return 0;
}