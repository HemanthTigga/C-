#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	long long N;
	cin>>T;
	while(T>0)
	{
	    T--;
	    cin>>N;
	    if(N%4==2 || N%4==3 )
	    cout<<3;
	    else if(N%4==1)
	    cout<<N;
	    else if(N%4==0)
	    cout<<N+3;

	    cout<<endl;
	}
	return 0;
}
