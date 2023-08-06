#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
typedef long long int lli;

int main(){
    lli testcases;
    cin >> testcases;
    for(lli TEST=0;TEST<testcases;TEST++){
        string s;
        cin >> s;
        lli len=s.length();
        
        lli x=0;
        if(len>=2){
            x=(int)(s[len-2]-'0');
            x=x*10;
            x+=(int)(s[len-1]-'0');
        }
        else{
            x=stoi(s);
        }
        cout << (x%20) << endl;
    
    }
    return 0;
}