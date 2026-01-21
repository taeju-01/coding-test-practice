#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name;
int score1;
int score2;
int score3;

class Score{
    public:
    string name;
    int score1;
    int score2;
    int score3;

    Score(string name=" ",int score1=0,int score2=0,int score3=0){
        this->name=name;
        this->score1=score1;
        this->score2=score2;
        this->score3=score3;
    }
};

bool cmp(Score a,Score b){
    return a.score1+a.score2+a.score3<b.score1+b.score2+b.score3;
}

int main() {
    cin >> n;
    Score student[n];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> score1;
        cin >> score2;
        cin >> score3;
        student[i]=Score(name,score1,score2,score3);
    }
    sort(student,student+n,cmp);
    for(int i=0;i<n;i++){
        cout<<student[i].name<<" "<<student[i].score1<<" "<<student[i].score2<<" "<<student[i].score3<<endl;
    }

    // Please write your code here.

    return 0;
}