#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int N;
int nums[2000];
int arr[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums,nums+2*N);
    for(int i=0;i<N;i++){
        arr[i]=nums[i]+nums[2*N-1-i];
    }
 
    sort(arr,arr+N);
    cout<<arr[N-1];

    // Please write your code here.

    return 0;
}
