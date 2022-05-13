//prime or not
#include<iostream>
using namespace std;
class prime
{
public:
    bool isprime(int n)
    {
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0){
                c++;
            }
        }
        if(c==0)
            return true;
        else
            return false;
    }
};
int main()
{
    prime obj;
    int n;
    cin>>n;
    cout<<obj.isprime(n);
}
