#include<bits/stdc++.h>
using namespace std;

int Max_Money(vector<int>& nums) {
  int a=nums.size();
  long long answer=0;
  if(a==1) return nums[0];
  vector<long long> dp(a,0);
  dp[0]=nums[0];
  dp[1]=nums[1];
  answer=max(dp[0],dp[1]);
  for(int i=2;i<a;i++)
  {
      dp[i]=dp[i-2]+nums[i];
      answer=max(answer,dp[i]);
  }
  return answer;
}
int main()
{
    int a,target;cin>>a;
    vector<int> nums(a);
    for(int i=0;i<a;i++) cin>>nums[i];
    cout<<Max_Money(nums);
    return 0;
}