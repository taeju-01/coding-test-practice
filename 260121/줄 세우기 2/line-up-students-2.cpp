#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h;
int w;
int num;
class Info{
    public:
    int h;
    int w;
    int num;

    Info(int h=0,int w=0,int num=0){
        this->h=h;
        this->w=w;
        this->num=num;
    }
};

bool cmp(Info a,Info b){
    if(a.h!=b.h) return a.h<b.h;
    return a.w>b.w;
}

int main() {
    cin >> N;
    Info student[N];

    for (int i = 0; i < N; i++) {
        cin >> h >> w;
        student[i]=Info(h,w,i+1);
    }
     sort(student,student+N,cmp);
     for(int i=0;i<N;i++){
        cout<<student[i].h<<" "<<student[i].w<<" "<<student[i].num<<endl;
     }

    // Please write your code here.

    return 0;
}