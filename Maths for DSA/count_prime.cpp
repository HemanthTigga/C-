//Optimised
//count no. of prime nos. till n
#include<iostream>
#include<vector>
using namespace std;
class countprime
{
public:
    int countprimes(int n)
    {
        int cnt=0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++)
        {
            if(prime[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i)
                    prime[j]=false;
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        return cnt;
    }
};
int main()
{
    countprime obj;
    int n;
    cin>>n;
    cout<<obj.countprimes(n);
}
