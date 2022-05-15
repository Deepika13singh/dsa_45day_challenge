class Solution {
public:

    

    int maxArea(vector<int>& height) {

        // brute force approach
        // time complexity O(n)


        // int n=height.size();
        // int area=0;
        // for(int i=0;i<n;i++){
        //     int cnt=0;
        //     for(int j=i+1;j<n;j++){
        //         cnt++;
        //         int h=min(height[i],height[j]);
        //         area=max(area,cnt*h);
        //     }
        // }
        // return area;


        // Two pointer approach

        int ans= INT_MIN, i =0,j=height.size()-1;

        while(i<j){
            ans=max(ans,(j-i)*(min(height[i],height[j])));
            height[i]<=height[j]?i++:j--;
        }
        return ans;
    }
};