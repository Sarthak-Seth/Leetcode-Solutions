/**
 * @param {string} text1
 * @param {string} text2
 * @return {number}
 */

let dp;

var solve = function(s1,s2,i,j)
{
    if(i === 0 || j === 0) return 0;

    if(dp[i][j] !== -1) return dp[i][j];

    if(s1[i-1] === s2[j-1]) return dp[i][j] = 1 + solve(s1,s2,i-1,j-1);

    else return dp[i][j] = Math.max(solve(s1,s2,i-1,j),solve(s1,s2,i,j-1));
    
}

var longestCommonSubsequence = function(s1, s2) 
{
    dp = Array.from({length:s1.length+1},() => Array(s2.length + 1).fill(-1));
    return solve(s1,s2,s1.length,s2.length);
};