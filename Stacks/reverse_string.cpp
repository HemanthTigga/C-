 #include<iostream>
 #include<stack>
 using namespace std;
 int main()
 {
     string str = "Hemanth";
     stack<char> s;
     for(int i = 0; i<str.length();i++)
     {
         char ch = str[i];
         s.push(ch);
     }
     string ans = "";
     while(!s.empty())
     {
         char ch = s.top();
         ans.push_back(ch);
         ////ans = ans + ch;
         s.pop();
     }

     cout<<"Reverse = "<<ans<<endl;
     return 0;
 }
//T.C = O(N)
//S.C = O(N)
