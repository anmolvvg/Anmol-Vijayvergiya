#include <bits/stdc++.h>
using namespace std;

    int findEquilibriumIdx(int nums[] , int n){

    for(int j=0 ;j<n ;j++){
        int N = j;
    
    int A=0;    
    int B=0;    
    
    for(int i=0 ;i<N ;i++){
        A+=nums[i];
    }
    for(int i=N+1 ;i<n ;i++){
        B+=nums[i];
    }
    
    if(A==B) {
        return N;
    }
}
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int equilibriumidx = findEquilibriumIdx(arr, n);
    cout << equilibriumidx << endl;
    return 0;
}

