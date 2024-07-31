/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) 
{
    let map = new Map();
    let ans = [];
    nums.forEach( num => map.set(num,(map.get(num) || 0) + 1) );

    let pq = Array.from(map);

    pq.sort();

    for(let i = 0;i < k ;i++)
    {
        ans.push(pq[i][0]);
    }

    return ans;

};