#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    vector<ll> v(n + 1);
    int i = 1, val = 1;
    while (i <= n)
    {
        v[i] = val;
        v[i + 1] = val;
        i += 2;
        val++;
    }
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] =  v[i] + pre[i - 1];
    }
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        long long sum;
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout<<sum<<"\n";
    }

    return 0;
}
