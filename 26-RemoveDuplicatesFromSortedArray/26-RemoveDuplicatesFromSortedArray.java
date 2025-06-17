// Last updated: 6/17/2025, 8:26:33 AM
public class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;

        int i = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        
        int[] nums1 = {1, 1, 2};
        int k1 = solution.removeDuplicates(nums1);
        System.out.println("k = " + k1);
        for (int i = 0; i < k1; i++) {
            System.out.print(nums1[i] + " ");
        }
        System.out.println();
        
        int[] nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
        int k2 = solution.removeDuplicates(nums2);
        System.out.println("k = " + k2);
        for (int i = 0; i < k2; i++) {
            System.out.print(nums2[i] + " ");
        }
        System.out.println();
    }
}
