#include <bits/stdc++.h> 
#include <cstring>
using namespace std;
int main()
{
    // Write your code here.
    string s="N2 i&nJA?a& jnI2n";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    string fstr="",st="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != ' '){
            st = s[i] + st;
            fstr += s[i];
        }
            
    }
    cout<<"rev = "<<st<<endl;
    cout<<"normal = "<<fstr<<endl;
    int t = st.compare(fstr);
    cout<<t;
    return 0;
}