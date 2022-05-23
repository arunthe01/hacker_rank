int remove_duplicate(int arr[],int n){
        // code here
        
         int count=0,k=0;
        
        while(k<n){
             int i = k;
             arr[count++] = arr[i]; 
             while(arr[i] == arr[k]){
                 ++k;
             }
             
        }
        
        
        return count;
    }
