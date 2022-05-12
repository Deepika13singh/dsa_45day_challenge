// Time complexity O(n)
// Space complexity O(n)

void moveZeroes(vector<int>& num) {
        vector<int> ans;
        for(int i=0;i<num.size();i++)
            if(num[i]!=0){
                ans.push_back(num[i]);
            }
        for(int i=0;i<num.size();i++)
            if(num[i]==0){
                ans.push_back(num[i]);
            }
        num=ans;


// Time complexity O(n)
// Space complexity O(1)
void moveZeroes(vector<int>& num) {
        int i=0;
        for(int j=0;j<num.size();j++){
            if(num[j]!=0){
                swap(num[j],num[i]);
                i++;
            }
        }
