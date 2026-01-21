#include <iostream>
#include <algorithm>

using namespace std;

int N;
int sequence;
int num;
class Position{
    public:
    int sequence;
    int num;

    Position(int sequence=0,int num=0){
        this->sequence=sequence;
        this->num=num;
    }
};
bool cmp(Position a,Position b){
    if(a.sequence!=b.sequence)
    return a.sequence<b.sequence;
    return a.num<b.num;
}

int main() {
    cin >> N;
    int idx[N];
    Position position[N];
    for (int i = 0; i < N; i++) {
        cin >> sequence;
        position[i]=Position(sequence,i+1);
    }

    sort(position,position+N,cmp);

    for(int i = 0; i < N; i++){
        int original_idx = position[i].num;
        idx[original_idx] = i + 1;
    }

    // 원래 순서대로 출력
    for(int i = 1; i <= N; i++){
        cout << idx[i] << " ";
    }


    // Please write your code here.

    return 0;
}
