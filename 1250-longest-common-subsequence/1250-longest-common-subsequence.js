/**
 * @param {string} text1
 * @param {string} text2
 * @return {number}
 */

var longestCommonSubsequence = function(s1, s2) 
{
    const n = s1.length, m = s2.length;
    let prev = Array(m+ 1).fill(0);
    let curr = Array(m+ 1).fill(0);

    for(let i=1;i<n+1;i++)
    {
        for(let j=1;j<m+1;j++)
        {
            if(s1[i-1] === s2[j-1])curr[j] = 1 + prev[j-1];

            else curr[j] = Math.max(prev[j],curr[j-1]);
    
        }
        prev = curr.map(x => x);
    }
    return prev[m];
};