#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int min_element(vector<int> m){
      int min = m.at(0);
     for(int i = 1; i<m.size(); i++){
         if(m.at(i)<min){
             min = m.at(i);
         }
     }
     return min;
}

int max_element(vector<int> m){
      int max = m.at(0);
     for(int i = 1; i<m.size(); i++){
         if(m.at(i)>max){
             max = m.at(i);
         }
     }
     return max;
}
 
 

int getTotalX(vector<int> a, vector<int> b) {
    
    // int min = min_element(a);
    int r = min_element(b);
    int max = max_element(a);
    int k = 1;
    vector<int> l;
    bool y = true;
   int d=1;
    
    for(int i =max; i<=r; i=max*++d){
        y=true;
        for(int j =0 ; j<a.size();j++){
            if(i%a.at(j) != 0 ){
                y=false;
                break;
            }
        }
        if(y)
            l.push_back(i);
    }
    int count = 0;
    bool nf = true;
    for(int i =0 ; i<l.size();i++){
        nf = true;
        for(int j = 0; j<b.size();j++){
            if(b[j]%l[i] != 0){
                nf = false;
                break;
            }
        }
        if(nf){
            count++;
        }
    }
    
    
  return count;  
   
}

int main() {
    vector<int> v = {6,2};
    vector<int> m = {24,36};
     cout<<getTotalX(v,m);
    
    
    
}
