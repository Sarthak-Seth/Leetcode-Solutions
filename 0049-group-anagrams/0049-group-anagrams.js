/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    
    let map = new Map();

    for(let s of strs)
    {
        let sortedS = s.split("").sort().join("");

        if(map.has(sortedS)) map.set(sortedS,[...map.get(sortedS),s])
        else {map.set(sortedS,[s])}
    }

    return Array.from(map.values());

};