#include<bits/stdc++.h>
using namespace std;
int missing(vector<int> &nums)
{
    int a=nums.size();
    vector<bool> present(a+1,false);
    for(int i=0;i<a;i++) present[nums[i]]=true;
    for(int i=0;i<=a;i++) 
    {
        if(!present[nums[i]]) return i;
    }
}
int main()
{
    int a;cin>>a;
    vector<int> nums(a);
    for(int i=0;i<a;i++) cin>>nums[i];
    cout<<missing(nums);
    return 0;
}