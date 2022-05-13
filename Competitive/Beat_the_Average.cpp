#include <iostream>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    int num,max,avg;
	    cin>>num>>max>>avg;
	    int sum=num*avg;
	    avg++;
	    if(avg>max)
	    cout<<0<<endl;
	    else
	    cout<<sum/avg<<endl;
	}
	return 0;
}
