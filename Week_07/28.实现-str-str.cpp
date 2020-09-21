/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;
        while(haystack[i] != '\0' && needle[j] != '\0')
        {
            if(haystack[i] == needle[j])
            {
                i++; j++;
            }
            else
            {
                i = i - j + 1;
                j = 0;
            }
        }
        if(j == strlen(needle.c_str()))
            return i - j;
        else return -1;

    }
};
// @lc code=end

