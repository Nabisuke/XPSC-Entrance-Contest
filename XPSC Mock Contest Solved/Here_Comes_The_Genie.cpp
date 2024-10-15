#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll total = 0;
    int last_ball = INT_MAX;
    for (auto it : v)
    {
        if(it >= last_ball)
        {
            it = last_ball - 1;

        }
        last_ball = it;
        if (it < 0)
        {
            it = 0;
        }
        total += it; 
            
    }
    cout<<total<<endl;
     
    return 0;
}