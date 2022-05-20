int equilibriumPoint(long long arr[], int n) {
    
        // Your code here
        
         if(n == 1 )
                return n;
            else if(n == 2)
                return -1;
                
         int suml = 0 , t = 0;
         
         
         for(int i = 0; i<n; i++){
             t= arr[i]+t;
         }
         
        for(int i = 1 ; i<n-1; i++){
               
                int sumr = 0;
                
                suml = arr[i-1] + suml;
                
                
                sumr = t-(suml+arr[i]);
                
                if(suml == sumr){
                    return i+1;
                }
        }
        
        return -1;
    }
