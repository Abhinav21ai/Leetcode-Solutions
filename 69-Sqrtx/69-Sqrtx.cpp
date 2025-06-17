// Last updated: 6/17/2025, 8:26:26 AM
class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        if(x==0|| x==1)
{
    return x;
}
        while(low<=high){
            int mid=(high+low)/2;
            if(mid==x/mid){
                return mid;
            }
           else if(mid<x/mid){
            low=mid+1;
           }
           else{
            high=mid-1;
           }
        }
        return high;

    }
};