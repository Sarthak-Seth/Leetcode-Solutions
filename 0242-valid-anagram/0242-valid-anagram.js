/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) 
{
    let sArray = new Array(26).fill(0);
    let tArray = new Array(26).fill(0);

    for(let ch of s)
    {
        sArray[ch.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }
    
    for(let ch of t)
    {
        tArray[ch.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }

    for(let i=0;i<26;i++)
    {
        if(sArray[i] !== tArray[i]) return 0;
    }
    return 1;
};