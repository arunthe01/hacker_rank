 vector<int> leaders(int arr[], int n){
        // Code here
        vector<int> v;
        
        stack<int> s;
        
        s.push(arr[n-1]);
        
        int max= s.top();
        
        for(int i = n-2; i>=0; i--){
            if(arr[i]>=max){
                s.push(arr[i]);
                max = arr[i];
                
            }
        }
        
        while(s.size() != 0){
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }
