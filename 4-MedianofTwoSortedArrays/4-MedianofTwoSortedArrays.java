// Last updated: 5/14/2025, 12:47:13 PM
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int arr[]=new int[nums1.length+nums2.length];
        int i=0;
        double ans=-1;
        for(int a:nums1){
            arr[i]=a;
            i++;
        }
        for(int b:nums2){
            arr[i]=b;
            i++;
        }
        Arrays.sort(arr);
        if((arr.length-1)%2==0){
            int low=0;
            int high=arr.length-1;
            int mid=(low+high)/2;
             ans=arr[mid];
            return ans;
        }
        else{
            int low=0;
            int high=arr.length-1;
            int mid=(low+high)/2;

            double m=(arr[mid]+arr[mid+1])/2.0;
            ans=m;
            return ans;
        }
       
    }
}