#include <stdbool.h>
#include <string.h>
bool isIsomorphic(char* s,char* t){
    char map_s[256]={0};
    char map_t[256]={0};
    int i;
    for(i=0;s[i]!='\0';i++){
        if(map_s[(unsigned char)s[i]]&&map_s[(unsigned char)s[i]]!=t[i]){
            return false;
        }
        if(map_t[(unsigned char)t[i]]&&map_t[(unsigned char)t[i]]!=s[i]){
            return false;
        }
        map_s[(unsigned char)s[i]]=t[i];
        map_t[(unsigned char)t[i]]=s[i];
    }
    return true;
}
