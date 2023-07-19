#include<iostream>
using namespace std;
class Solution
{
private:
    bool knows(int a,int b,vector<vector<int>>& M,int n)
    {
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
public:
    int celebrity(vector<vector<int>>& M,int n)
    {
        stack<int> s;
        //step 1: Push all elements
        for(int i =0;i<n;i++)
        {
            s.push(i);
        }
        //step 2:
        while(s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if(knows(a,b,M,n))
                s.push(b);
            else
                s.push(a);
        }
        int candidate = s.top();
        //step 3: single element in stack is potential celebrity candidate
        //so verify it

        //Checking row
        int zeroCheck = 0;

        for(int i =0;i<n;i++)
            if(M[candidate][i] == 0)
                zeroCheck++;

        //all zero
        if(zeroCheck != n)
            return -1;

        //checking column
        int oneCheck = 0;
        for(int i =0;i<n;i++)
            if(M[i][candidate] == 1)
                oneCheck++;

        //all one
        if(oneCheck != n-1)
            return -1;

        return candidate;
    }
};
