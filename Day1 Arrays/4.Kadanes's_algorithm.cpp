//Kadane's algorithm is used for maximum subarray sum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(sum<0) sum=0;
            sum+=nums[i];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
}
//TC:O(n) SC:O(1)

//Brute force is take all subarrays ans take its sum which gets tc of n^3
//Better is skipping the k loop since each time we just add tht element to the sum and we really dont need all teh previous elements ,tc of n^2

//To return the indices of start and end we can make the follwing changes.Keep in mind that start index is only when sum is 0 and end index is when 
//sum>maxi
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        int start=0,start_index=0,end_index=0;
     
        for(int i=0;i<nums.size();i++){
          if(sum==0) start=i;
            
            sum+=nums[i];
           if(sum>maxi) {
             maxi=sum;
             start_index=start;
             end_index=i;
          
          if(sum<0) sum=0;
        }
        return maxi;
    }
}
