#include<bits/stdc++.h>
using namespace std;

void solve(int *nums,int n){
    int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else {
                swap(nums[low],nums[mid]);
                low++,mid++;}
        }
}

void display(int *arr,int n){
    for (int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }cout << endl;
}

int main(){
    int n;
    cin >> n;
    int *arr =new int [n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    solve(arr,n);
    display(arr,n);
}