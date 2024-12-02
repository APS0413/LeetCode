import java.util.Stack;
class Solution{
    public String simplifyPath(String path){
        Stack<String>stack=new Stack<>();
        String[] components=path.split("/");
        for(String component : components){
            if(component.equals("..")){
                if(!stack.isEmpty()){
                    stack.pop();
                }
            } else if(!component.equals(".") && !component.isEmpty()){
                stack.push(component);
            }
        }
        StringBuilder result=new StringBuilder();
        for(String dir:stack){
            result.append("/").append(dir);
        }
        return result.length()>0?result.toString():"/";
    }
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.simplifyPath("/home/"));
        System.out.println(solution.simplifyPath("/../"));
        System.out.println(solution.simplifyPath("/home//foo/")); 
        System.out.println(solution.simplifyPath("/home/user/Documents/../Pictures"));
        System.out.println(solution.simplifyPath("/.../a/../b/c/../d/./")); 
    }
}
