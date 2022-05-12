#include<iostream>
#include<vector>
using namespace std;
class compression
{
public:
    int ansIndex=0;
    vector<char> compress(vector<char> chars)
    {
        int i=0;
        //int ansIndex=0;
        int n=chars.size();
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
                j++;
            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1)
            {
                string cnt=to_string(count);
                for(char ch:cnt)
                    chars[ansIndex++]=ch;
            }
            i=j;
        }
        return chars;
    }
};
int main()
{
    compression obj;
    vector<char> s1={'a','a','b','b','b','c','c','d','d','d','d'};
    //cout<<"size of s1= "<<s1.size();
    vector<char> ans;

    ans=obj.compress(s1);
    //cout<<"size of ans= "<<ans.size();
    for(int i=0;i<obj.ansIndex;i++)
        cout<<ans[i]<<" ";
}
