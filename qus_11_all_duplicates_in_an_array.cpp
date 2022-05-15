class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //     vector<int> dup;
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             dup.push_back(nums[i]);
    //         }
    //     }
    //     return dup;
    
    
//     vector<int> arr(nums.size()+1);
//     vector<int> ans;
//     for(int i=0;i<nums.size();i++){
//         arr[nums[i]]++;
//     }
    
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]>1){
//             ans.push_back(i);
//         }
//     }
//     return ans;
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            }
            else{
                ans.push_back(abs(nums[i]));
            }
            

        }
        return ans;
    }
};