
#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int A[8];
    int i,j,k,p,max=0,s=0;
    for(i=0;i<8;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i;j<i+4;j++)
        {
            //cout<<"a[j]="<<A[j];
            s=s+int(A[j]);
        }
        if(s>max)
        {
            //cout<<"s="<<s;
            max=s;
        }
        s=0;
    }
    //cout<<"max="<<max<<endl;
    for(j=5;j<8;j++)
    {
        for(k=j;k<8;k++)
        {
            s=s+A[k];
        }
        //cout<<"s="<<s<<endl;
        //cout<<"j="<<j<<endl;
        p=j-5;
        for(k=0;k<=p;k++)
        {
            s=s+A[k];
        }
        //cout<<"s="<<s<<endl;
        if(s>max)
        {
            //cout<<"s="<<s;
            max=s;
        }
        s=0;
    }

    cout<<max;
}
