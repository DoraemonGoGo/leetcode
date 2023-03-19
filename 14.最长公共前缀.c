/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
char * longestCommonPrefix(char ** strs, int strsSize){
      int i,j;//flag = 0;

    if (strsSize == 0){
        return "";
    }
    
    for(j = 0; j < strlen(strs[0]); j++){ 
        for ( i = 1; i < strsSize; i++)
        {
            if (strs[0][j] != strs[i][j]) 
            {
                strs[0][j] = '\0'; //此时此处可以避免常量无法修改的问题
                //flag = 1;
                break;
            }
        }
    }

    return strs[0];
}
// @lc code=end

