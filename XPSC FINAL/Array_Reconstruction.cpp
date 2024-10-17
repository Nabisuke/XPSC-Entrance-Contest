#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n-2);
        ll total = 0;
        for (int i = 0; i < n-2; i++)
        {
            cin >> v[i];
            total+= v[i];
        }
        ll in_total;
        cin>>in_total;
        ll remain = in_total - total;
        cout << remain + 1 << endl;
    }
    return 0;
}