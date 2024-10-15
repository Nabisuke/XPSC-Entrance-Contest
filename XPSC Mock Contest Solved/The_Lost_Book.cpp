#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }    
    int x;
    cin>>x;   
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            cout<<i<<endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout<<-1<<endl;
    }
    return 0;
}
