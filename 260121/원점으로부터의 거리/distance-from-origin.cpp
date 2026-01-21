#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x;
int num;
int y;
class Distance{
    public:
    int x;
    int y;
    int num;

    Distance(int x=0,int y=0,int num=0){
        this->x=x;
        this->y=y;
        this->num=num;
    }
};

bool cmp(Distance a,Distance b){
    if(abs(a.x)+abs(a.y)!=abs(b.x)+abs(b.y))
    return abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y);
    return a.num<b.num;
}

int main() {
    cin >> N;
    Distance position[N];

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        position[i]=Distance(x,y,i+1);
    }

    sort(position,position+N,cmp);

    for(int i=0;i<N;i++){
        cout<<position[i].num<<endl;
    }
    

    // Please write your code here.

    return 0;
}
