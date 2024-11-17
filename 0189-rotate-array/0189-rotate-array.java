public class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        if (k == 0) return;
        int[] temp = new int[n];
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }
        for (int i = k; i < n; i++) {
            temp[i] = nums[i - k];
        }
        System.arraycopy(temp, 0, nums, 0, n);
    }
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 6, 7};
        int k = 3;
        new Solution().rotate(nums, k);
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
