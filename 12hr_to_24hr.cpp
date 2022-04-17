#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string n,m;
         n = string(1,s[0]);
         m = string(1,s[1]);
         string q = n+m;
         
        if(q == "12"){
            if(s[8] == 'P'){
                s.erase(8,2);
                return s;
            }
            s[0] = '0';
            s[1] = '0';
            s.erase(8,2);
            return s;
        }
    
    
    if(s[8] == 'P' ){
         int y = stoi(q) + 12;
          n = to_string(y);
          s[0] = n[0];
          s[1] = n[1];
          s.erase(8,2);
          
          return s;
    }
    
    s.erase(8,2);
    
    
    return s;
    
    
}



int main() {
   cout<<timeConversion("12:05:45AM");
	
	return 0;
}
