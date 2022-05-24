vector<long long int> productExceptSelf(vector<long long int>& a, int n) {
       
        //code here   
        
        long long int mul =1;
        vector<long long int> v;
        int zc = 0;
        int c = -1;
        
        for(int i = 0; i<n; i++){
            if(a[i] == 0){
                zc++;
                c = i;
            }
            
            else
                mul = mul*a[i];
            
        }
        
        if(zc == 1){
          
            for(int i = 0; i<n; i++){
                if(i != c)
                    v.push_back(0);
                else
                    v.push_back(mul);
            }
        }
        
        
       else if(zc >1){
            for(int i = 0; i<n; i++)
                v.push_back(0);
        }
        
        else{
            for(int i = 0; i<n; i++)
                v.push_back(mul/a[i]);
        }
        
     return v;    
    }
