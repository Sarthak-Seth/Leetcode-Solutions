/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {number}
 */



var pathSum = function(root, target) 
{
    let map = new Map();
    let ans = 0;

    const solve = (root, sum) => {
        if(!root) return null;

        sum += root.val;

        if(sum === target) ans++;

        if(map.has(sum-target)) ans += map.get(sum-target);

        map.set(sum,(map.get(sum) || 0 )+ 1);

        solve(root.left,sum);
        solve(root.right,sum);

        map.set(sum,map.get(sum) - 1);

    }
    solve(root,0);
    return ans;
}