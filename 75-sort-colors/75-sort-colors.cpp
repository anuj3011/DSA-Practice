class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int it: nums){
            if(it==0) cnt0++;
            else if(it==1) cnt1++;
            else cnt2++;
        }
        cout<<cnt0<<" "<<cnt1<<" "<<cnt2;
        for(int i=0;i<cnt0;i++)
            nums[i]=0;
        for(int i=cnt0;i<cnt0+cnt1;i++)
            nums[i]=1;
        for(int i=cnt0+cnt1;i<nums.size();i++)
            nums[i]=2;
    }
};