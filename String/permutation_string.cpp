#include<iostream>
using namespace std;
class permutation
{
private:
    bool checkEqual(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1,string s2)
    {
        //char count array
        int count[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count[index]++;
        }
        //traverse s2 string in window pf size s1 length
        int i=0;
        int windowsize=s1.length();
        int count2[26]={0};
        while(i<windowsize&&i<s2.length())
        {
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count,count2))
            return true;
        //aage window process
        while(i<s2.length())
        {
            char newchar=s2[i];
            int index=newchar-'a';
            count2[index]++;
            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            count2[index]--;
            i++;
            if(checkEqual(count,count2))
                return true;
        }
        return false;
    }
};
int main()
{
    permutation obj;
    string s1,s2;
    cin>>s1>>s2;
    if(obj.checkInclusion(s1,s2))
        cout<<"True";
    else
        cout<<"False";
}
