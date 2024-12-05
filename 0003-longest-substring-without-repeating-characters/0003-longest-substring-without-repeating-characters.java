class Solution {
    public int lengthOfLongestSubstring(String s){
        int n=s.length();
        int maxLength=0;
        int start=0;
        Map<Character,Integer>charIndexMap=new HashMap<>();
        for (int end=0;end<n;end++){
            char currentChar=s.charAt(end);
            if (charIndexMap.containsKey(currentChar)&&charIndexMap.get(currentChar)>=start){
                start=charIndexMap.get(currentChar)+1;
            }
            charIndexMap.put(currentChar,end);
            maxLength=Math.max(maxLength,end-start+1);
        }
        return maxLength;
    }
}
