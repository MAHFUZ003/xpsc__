#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	for (int i=0;i<t;i++){
	    cin>>n;
	    int summer = 0, balls = 0, counter = 0;
	    int score;
	    for (int j=0;j<n;j++){
	        cin>>score;
	        summer += score;
	        balls++;
	        
	       // cout<<summer<<"Oye"<<balls<<"\n";
	        if ((float)summer/balls ==1){
	            counter++;
	        };
	    };
	    cout<<counter<<"\n";
	}
	return 0;
}