class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

    //Brute force 

    // for(int i=0;i<nums.size();i++)
    //  {
    //      int curr= nums[i];
    //      for(int j=i+1;j<nums.size();j++)
    //      {
    //          if(target-curr==nums[j])
    //          {
    //              return {i, j};
    //          }
    //      }
    //  }
    //  return {-1,-1};


    // OR


//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if((nums[i]+nums[j])==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     break;
//                 }
//             }
            
//         }
//         return ans;
        
        
        // using pair 2 pointer appraoch for
        // Time complexity O(n)
        
        // vector<pair<int,int>> p;
        // for(int i=0;i<nums.size();i++){
        //     pair<int ,int> temp(nums[i],i);
        //     p.push_back(temp);
        // }
        // sort(p.begin(),p.end());
        // int ptr1=0;
        // int ptr2=nums.size()-1;
        // while(ptr1<=ptr2){
        //     if(p[ptr1].first+p[ptr2].first==target)
        //     {
        //         ans.push_back(p[ptr1].second);
        //         ans.push_back(p[ptr2].second);
        //         return ans;
        //     }
        //     else if(p[ptr1].first+p[ptr2].first<target){
        //         ptr1++;
        //     }
        //     else{
        //         ptr2--;
        //     }
        // }
        // ans.push_back(-1);
        // ans.push_back(-1);
        // return ans;
        
        
        // using map
        // Time complexity O(n)
        
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return ans;
    }
};