#include <iostream>
using namespace std;

int bst(int arr[], int x, int n){
    int s = 0;
    int e = n-1;
    
    while(s<=e){
       int mid = (s+e)/2;
       
       if(s == e)
            return arr[s];
            
        else if(arr[mid] == x)
            return mid;
            
        else if( x < arr[mid])
            e = mid;
        else
            if(mid+1 < n){
                s=mid+1;
            }
    }
    
}

int main() {
    int arr[] = {10,19,17,25,78};
    
    cout<< bst(arr, 16,5);
}
