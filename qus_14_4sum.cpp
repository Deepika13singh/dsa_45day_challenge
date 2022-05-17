// soln is right but cause runtime error



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
       
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
           
            for(int j=i+1;j<nums.size();j++){
                 int low=j+1,high=nums.size()-1;
                

                
                while(low<high){
                    long long int sum=nums[i]+nums[low]+nums[j]+nums[high];
                    if(sum<target){
                        low++;
                    }

                    else if(sum>target){
                        high--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int last=nums[high],first=nums[low];

                        while(low<high && last==nums[high])high--;
                        while(low<high && first==nums[low])low++;
                    }
                }
                 while (j+1 < nums.size() && nums[j] == nums[j+1]) j++;
            }
                while (i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        
        }
        return ans;
    }
};

// better way of solving
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
       
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
           
            for(int j=i+1;j<nums.size();j++){
                 int low=j+1,high=nums.size()-1;
                

                
                while(low<high){
                    int target2=target-nums[i]-nums[j];
                    long long int sum=nums[low]+nums[high];
                    if(sum<target2){
                        low++;
                    }

                    else if(sum>target2){
                        high--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        int last=nums[high],first=nums[low];

                        while(low<high && last==nums[high])high--;
                        while(low<high && first==nums[low])low++;
                    }
                }
                 while (j+1 < nums.size() && nums[j] == nums[j+1]) j++;
            }
                while (i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        
        }
        return ans;
    }
};