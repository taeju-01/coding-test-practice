#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h;
int w;
class Info{
    public:
    int h;
    int w;
    int N;

    Info(int h=0,int w=0,int N=0){
        this->h=h;
        this->w=w;
        this->N=N;
    }
};

bool cmp(Info a, Info b){
    if (a.h != b.h) return a.h > b.h;
    if (a.w != b.w) return a.w > b.w;
    return a.N < b.N;
}

int main() {
    cin >> N;
    Info student[N];

    for (int i = 0; i < N; i++) {
        cin >> h>> w;
        student[i]=Info(h,w,i+1);
    }

    sort(student,student+N,cmp);
    for(int i=0;i<N;i++){
        cout<<student[i].h<<" "<<student[i].w<<" "<<student[i].N<<endl;
    }

    // Please write your code here.

    return 0;
}
