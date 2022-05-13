#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(z>=x &&z<(x+y)){
	        cout<<1<<endl;
	    }
	    else if(z>=(x+y)){
	        cout<<2<<endl;
	    }
	    else
	    cout<<0<<endl;
	}
	return 0;
}
