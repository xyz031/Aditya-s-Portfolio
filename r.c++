#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v,ans,h,x;
for (int i = 0; i < v.size(); i++)
{
    if (v[i]>0)
    {
        ans.push_back(v[i]);
    }
    else
    {
        h.push_back(v[i]);
    }
    
}

for (int i = 0; i < h.size(); i++)
{
    x.push_back(ans[i]);
     x.push_back(h[i]);
}
return x;
}