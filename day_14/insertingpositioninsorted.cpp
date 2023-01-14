class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        int s=nums.size();
        for(int i=0;i<s;i++){
            if(nums[i]==target)
            return i;
            else if(nums[i]>target)
            return i;
        }
        return s;
    }
};
// this has time complexity of o(n).
//but for time complexity of o(logn), there is a second approach to which called binary searches..
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size();
        int mid=(start+end)/2;
        while(start<end){
            if(nums[mid]==target)
            return mid;
            else if(nums[i]>target)
            start=mid+1;
            else{
            end=mid-1;
            }
            mid=(start+end)/2;
        }
        return end+1;

        }
    }
}; 
