class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> m;
        for(int i = 0; i<n;i++){
            int sum = 0;
            int k = i;
            while(k<n){
                if(arr[k]<= (s-sum)){
                    sum = sum+arr[k];
                    if(sum == s){
                        m.push_back(i+1);
                        m.push_back(k+1);
                        return m;
                    }
                    k++;
                }
                else{
                    break;
                }
            }
        }
        
        m.push_back(-1);
        return m;
        // Your code here
    }
};
