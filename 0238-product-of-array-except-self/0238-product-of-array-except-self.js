/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    let pre = [],post = [], n = nums.length,ans = [];
    pre[0] = nums[0];
    post[n-1] = nums[n-1];

    for(let i =1;i<n;i++)
    {
        pre[i] = pre[i-1]*nums[i];
        post[n-i - 1] = post[n-i]*nums[n-i - 1]
    }

    console.log(pre); 
    console.log(post); 

    ans[0] = post[1]; ans[n-1] = pre[n-2]; 

    for(let k = 1;k<n-1;k++)
    {
        ans[k] = pre[k-1]*post[k+1];  
    }










    return ans;
};