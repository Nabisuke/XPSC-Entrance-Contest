#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        total += v[i];
    }
    bool found = false;
    ll left_total =0;
    ll right_total = 0;
    for (int i = 0; i < n; i++)
    {
        right_total = total - left_total - v[i];
        if (left_total == right_total)
        {
            cout<<left_total+ v[i]<<" "<<i+1<<endl;
            found = true;
            break;
        }
        left_total += v[i];
    }
    if (!found)
    {
        cout<<"UNSTABLE\n";
    }

    return 0;
}