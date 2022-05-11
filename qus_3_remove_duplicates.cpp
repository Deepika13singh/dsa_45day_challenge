class Solution {
public:
    void move(vector<int>& nums,int n){
        int m=-1000;
        for(int i=n;i<nums.size()-1;i++){
            nums[i]=nums[i+1];
        }
        
        nums[nums.size()-1]=m;
    }
    
    int removeDuplicates(vector<int>& nums) {
       
        if(nums.size()==0)return 0;
        int i=0,j=0;
        while(++j<nums.size()){
            if(nums[j]!=nums[i]){
                nums[++i]=nums[j];
            }
        }return i+1;
        
        // int count=0,i=0;
        // while(i<nums.size()-1& nums[i]!=-1000){
        //     if(nums[i]==nums[i+1]){
        //         nums[i]=-1000;
        //         move(nums,i);
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=-1000){
        //         count++;
        //     }
        // }
        // return count;
    }
};