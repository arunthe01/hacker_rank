void rotateArr(int arr[], int d, int n){
    // code here
    if(d>n)
      d = d%n;
    
    int a[d];
    
    
    
    for(int  i = 0; i < d; i++){
        a[i] = arr[i];
    }
    
    for(int j=d ; j<n; j++){
        arr[j-d]=arr[j];
    }
    
     int k=0;
     
    for(int j = n-d; j<n; j++){ 
        arr[j] = a[k++];
    }
    
    
    
}
