
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int result = arr[n - 1] - arr[0];
        int low = arr[0]+k;
        int high = arr[n-1]-k;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-k < 0) continue;
            
            int mini = min(arr[i+1]-k,low);
            int maxi = max(arr[i]+k,high);
            
            
            
            result= min(result,maxi-mini);
            
        }
        return result;
    }
};
