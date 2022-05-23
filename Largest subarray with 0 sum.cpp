int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        
        unordered_map<int,int> u;
        
        int sum = 0, len = 0;
        
        for(int i = 0; i<n; i++){
            
            sum = sum+A[i];
            
            if( sum == 0)
                len = i+1;
                
             if(u.find(sum) != u.end())
                len = max(len, i-u[sum]);
                // cout<<u[sum];
            
            
            else if(u.find(sum) == u.end())
               u.insert({sum,i});
            
        }
        
        return len;
    }
