vector<int> duplicates(int arr[], int n) {
        // code here4
        unordered_map<int,int> u;
        vector<int> v;
        
        for(int i = 0 ; i<n; i++){
            
            
            if(u.find(arr[i]) == u.end())
                u[arr[i]] = 1;
                
            else if(u[arr[i]] == 1){
                u[arr[i]] = -1;
                v.push_back(arr[i]);
            }
                
                
        }
        
        
        if(v.size()==0){
                v.push_back(-1);
                return v;
            }
                
                sort(v.begin(), v.end());
                
                return v;
    }
