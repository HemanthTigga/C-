#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int num, maxi, i , sec2 = -1, sec1=0;
        cin>>num>>maxi;
        vector<int> H(num);

        for(i=0; i<num; i++)
        {
            cin>>H[i];
            sec2 = max(sec2, H[i]);
            sec1 += (H[i]/maxi);
            if(H[i]%maxi)
                sec1++;
        }
        cout<<min(sec1,sec2)<<endl;
    }
  return 0;
}
