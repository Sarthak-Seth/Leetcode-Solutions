/**
 * @param {number[]} nums
 * @return {number[]}
 */
function productExceptSelf(nums) {
    let n = nums.length;
    let ans = new Array(n).fill(1);
    let curr = 1;
    
    for (let i = 0; i < n; i++) {
        ans[i] *= curr;
        curr *= nums[i];
    }

    // console.log(ans);
    
    curr = 1;
    
    for (let i = n - 1; i >= 0; i--) {
        ans[i] *= curr;
        curr *= nums[i];
    }
    
    return ans;
}