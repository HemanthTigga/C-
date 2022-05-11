#include <bits/stdc++.h>
using namespace std;
const int me = 100025;
int  n, c;
int a[me];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int best=0;
        int low = 0, high = a[n - 1], mid;
        while (low <= high)
        {
            mid = (low + high + 1) / 2;
            int cnt = 1, left = 0;
            for (int i = 1; i < n and cnt < c; i++)
            {
                if (a[i] - a[left] >= mid)
                {
                    left = i, cnt++;
                }
            }
            if (cnt >= c)
            {
                best = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << best << endl;
    }
    return 0;
}
