#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];
string arr[100];

int main() {
    cin >> n >> k >> t;
    int len=t.length();

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(str[i].substr(0,len)==t){
        arr[cnt]=str[i];
        cnt++;
        }
    }
    sort(arr,arr+cnt);
    cout<<arr[k-1];
    
    

    // sort(str,str+n);
    
    // Please write your code here.

    return 0;
}