class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // brute force approach
        // Time complexity O(n)

        // int cnt=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum%k==0){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;


        // time complexity O(n)
        // Space complexity o(n)

        map<int,int> m;
        int ans=0;
        int prefixsum=0;
        m[0]++;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            int rem=prefixsum%k;
            if(rem<0)
                rem+=k;
            ans+=m[rem];
            m[rem]++;
        }
        return ans;
    }
};