class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        // code here
        int min_height=std::min_element(arr.begin(),arr.end());
        int max_height=std::max_element(arr.begin(),arr.end());
        if (min_height +k>=max_height-k){
            return 0;
        }
        return(max_height-k)-(min_height+k);
    }