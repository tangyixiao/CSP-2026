#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin >> n >> m;
    vector<int> arr(n+1);
    int maxn = 0;
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        maxn = max(arr[i],maxn);
        sum &= arr[i];
    }
    if(m == 1)
    {
        cout << maxn;
        return 0;
    }
    if(m == n)
    {
        cout << sum;
        return 0;
    }
    int maxsum = 0;
    if(m == n - 1)
    {
        for(int i=1;i<=n;i++)
        {
            int nowsum = 0;
            for(int j=1;j<=n;j++)
            {
                if(i != j)
                {
                    nowsum &= arr[j];
                }
            }
            maxsum = max(maxsum,nowsum);
        }
        cout << maxsum;
        return 0;
    }
    if(m == 2)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int noww;
                if(i != j)
                {
                    noww = arr[i] & arr[j];
                }
                maxsum = max(maxsum,noww);
            }
        }
        cout << maxsum;
        return 0;
    }
    else
    {
        sort(arr.begin()+1,arr.end());
        cout << arr[n];
    }
    return 0;
}