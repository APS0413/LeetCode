import java.util.Arrays;
class Solution{
    public String largestNumber(int[] nums){
        String[] numStrs=Arrays.stream(nums)
                                 .mapToObj(String::valueOf)
                                 .toArray(String[]::new);
        Arrays.sort(numStrs,(a,b)->(b+a).compareTo(a+b));
        if (numStrs[0].equals("0")){
            return "0";
        }
        StringBuilder largestNumber=new StringBuilder();
        for (String numStr : numStrs) {
            largestNumber.append(numStr);
        }        
        return largestNumber.toString();
    }
}
