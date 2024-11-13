char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char *prefix = strs[0];
    int prefixLength = strlen(prefix);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixLength && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefixLength = j;
        if (prefixLength == 0) return "";
    }
    prefix[prefixLength] = '\0';

    return prefix;
}
