#include<bits/stdc++.h>
using namespace std;

void printArray(int n, int ans[]){
    cout<<"Reversed Array is: \n";
    for(int i=0;i<n;i++){
        cout<< ans[i] << " ";
    }

}
void reverseArray(int n, int arr[]){
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1] = arr[i];
    }
    printArray(n, ans);
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseArray(n, arr);

    return 0;
}
