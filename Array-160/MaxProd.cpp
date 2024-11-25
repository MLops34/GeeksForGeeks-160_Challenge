int maxProduct(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        if(n==1)
         return arr[0];
        int sum=0;
        for(int i=0;i<n;i++){
            int ans=arr[i];
              sum=max(sum,ans);
            for(int j=i+1;j<n;j++){
                ans*=arr[j];
                  sum=max(sum,ans);
            }
            
        }
        return sum;