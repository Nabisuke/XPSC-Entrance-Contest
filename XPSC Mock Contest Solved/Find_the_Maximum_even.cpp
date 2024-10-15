#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    int in_max = INT_MIN;
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
        if (v[i] > in_max && v[i] %2 == 0)
        {
            in_max = v[i];
        }
    }
    pair<int,int> p;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pair<int, int> p = {v[i], v[j]};
            int sum = p.first + p.second;
            if (sum % 2 == 0 && sum > in_max)
            {
                in_max = sum;
            }
        }
    }
    cout << in_max << endl;
    return 0;
}