#include <bits/stdc++.h>

using namespace std;

int a[200000];
int b[200000];
int ans[200000];
long long n,m;
long long l,r,p,k,sa,sb;

int main()
{
    cin >> n >> m;
    for (int i=0; i<n; ++i)
    {
        cin >> a[i];
    }
    for (int i=0; i<m; ++i)
    {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    p=b[0];
    for (int i=0; i<n; ++i)
    {
        if (a[i]>p)
        {
            cout << k << ' ';
            if (sb<m-1)
            {
                sb++;
                p=b[sb];
            }
            else
            {
                break;
            }
        }
        else
        {
            k++;
        }
    }
    if (sb<m-1)
    {
        for (int i=sb; i<m; ++i)
        {
            cout << k << ' ';
        }
    }
}








