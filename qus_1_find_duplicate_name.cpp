#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int n){
    // As qus say 1)we cann't modify the arr which means no sorting is allowed
    // 2)Space use is constant means no hash table

    // Time complexity(nlogn)
    // space complexity(1) but rule 1 is violated
    
    /*sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    return -1;*/

    // Rule 2 violated
    // Time complexity O(N)
    // Space complexity o(N)

    // First
    /* unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(!m.count(arr[i])){
            m[arr[i]]++;
        }
        else{
            return arr[i];
        }
    }
    return -1; */

    // Second
    /* vector<int> ans(n+1);
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(ans[i]>1){
            return i;
        }
    }
    return -1; */


    // floyd's tortoise and hare method
    // Time complexity O(n);
    // Space complexity o(1);

    /* int ptr1=arr[0];
    int ptr2=arr[0];

    do
    {
        ptr1=arr[ptr1];
        ptr2=arr[arr[ptr2]];
    } while (ptr1!=ptr2);

    ptr2 =arr[0];

    while(ptr2!=ptr1){
        ptr1=arr[ptr1];
        ptr2=arr[ptr2];
    }
    
    return ptr1;
 */

    // using swap sort
    // time complexity O(n)
    // space complexity O(1)
    // doesn't obey 1st rule
    /* int i=0;
    while(n>i){
        if(arr[i]==i+1){
            i++;
        }
        else{
            if(arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
            }
            else{
                i++;
            }
        }
    }

    // for(int i=0;i<n;i++){
    //     cout << arr[i] << "  ";
    // }cout<< endl;

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return arr[i];
        }
    }
    return -1;
 */


    // Treating element like index
    // time complexity - O(n)
    // space compexity - O(1)

    // Easiest Approach

    // for(int i=0;i<n;i++){
    //     if(arr[abs(arr[i])]<0){
    //         return abs(arr[i]);
    //     }
    //     else{
    //         arr[abs(arr[i])]=-arr[abs(arr[i])];
    //     }
    // }
    // return -1;


    // binary search
    // T.C O(NlogN)
    // S.C o(1)

    int high=n,low=1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int cnt=0;
        for(int i : arr){
            if(i<=mid){
                cnt++;
            }
        }
        if(cnt<=mid){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;

}

int main(){
    // It's given that there will only be one repeating number
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << solve(arr,n);
    return 0;
}