class solution{
    public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+n-d);
        reverse(arr.begin()+n-d,arr.end());
    }
};