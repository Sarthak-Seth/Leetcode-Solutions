/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) 
{
    let st = new Set(nums);

    return nums.length !== st.size;

};