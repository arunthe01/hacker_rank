int getPairsCount(int arr[], int n, int k) {
        // code here
        
        int count = 0;
        
        unordered_map<int, int> u;
        
        for(int i = 0; i<n ; i++){
            
            if(u.find(arr[i]) == u.end())
                u[i] = 1;
                
            else
                u[i] += 1;
            
        }
        
        for(int i = 0 ; i<n ; i++){
            if(u[k-arr[i]])
                count += u[k-arr[i]];
            
             if((k-arr[i]) == arr[i]){
                count--;
            }
            
        }
        return count/2;
    }     
