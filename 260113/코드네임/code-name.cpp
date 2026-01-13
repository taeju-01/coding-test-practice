#include <iostream>

#define MAX_N 5

using namespace std;
class people{
    public:
    char codename;
    int score;

    people(char codename=' ',int score=0){
        this->codename=codename;
        this->score=score;
    }

};


int main() {
    char codename;
    int score;
    people peoples[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename >> score;
        peoples[i]=people(codename,score);
    }
    int min=0;
    for(int i=0;i<MAX_N;i++){
        if(peoples[min].score>peoples[i].score)
        min=i;
    }
    cout<<peoples[min].codename<<" "<<peoples[min].score;


    // Please write your code here.

    return 0;
}
