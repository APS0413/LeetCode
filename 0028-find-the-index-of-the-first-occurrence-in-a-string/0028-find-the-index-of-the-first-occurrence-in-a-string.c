int strStr(char* haystack,char* needle) {
    int haystack_len=strlen(haystack);
    int needle_len=strlen(needle);
    if (needle_len==0) {
        return 0;
    }
    for (int i=0;i<=haystack_len-needle_len;i++) {
        if (strncmp(&haystack[i],needle,needle_len)==0) {
            return i;
        }
    }
    return -1;
}
