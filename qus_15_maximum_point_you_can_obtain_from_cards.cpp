class Solution {
public:

    // brute force 
    // time complexity O(n**2) gives tle

    int maxScore(vector<int>& cardpoints, int k) {
       /*  int ans=0;
        int x=0;
        int dub=k;
        while(k+1){
            int right=cardpoints.size()-1;
            int sum=0,n=k;
            
            for(int i=0;i<x && i<dub;i++){
                sum+=cardpoints[i];
                cout<<"in 1st one "<< sum <<endl;
            }
            
            while(n){
                sum+=cardpoints[right];
                cout<< "inside it "<<sum<<endl;
                right--;
                n--;
            }
            ans=max(sum,ans);
            x++;
            k--;
        }
        return ans; */

        // time complexity O(n)
        int total=0;
        for(int i=0;i<cardpoints.size();i++){
            total+=cardpoints[i];
        }
        int slide=0;
        for(int j=0;j<cardpoints.size()-k;j++){
            slide+=cardpoints[j];
        }
        int next=cardpoints.size()-k;
        int ans=total-slide,i=0;
        while(k){
            slide=slide-cardpoints[i];
            i++;
            slide=slide+cardpoints[next];
            next++;
            ans=max(ans,total-slide);
            k--;
        }
        return ans;


        // next approach
        int n=cardpoints.size();
        int tot=0;
        for(int i=0;i<k;i++){
            tot+=cardpoints[i];
        }
        int left=k-1,rgt=n-1;
        int ans=tot;
        while(k--){
            tot=tot+cardpoints[rgt]-cardpoints[left];
            ans=max(ans,tot);
            left--;rgt--;
        }
        return ans;
    }
};