#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin >> n >> m;
    vector<int> arr(n+1);
    if(m == 1)
    {
        for(int i=1;i<=n;i++) 
        {
            cin >> arr[i];
        }
        cout << n;
    }
    else if(m == 2)
    {
        for(int i=1;i<=n;i++) cin >> arr[i];
        if(arr[n] == 1)
        {
            bool is_one = 0;
            for(int j=1;j<=n-1;j++)
            {
                if(arr[j] == 1) 
                {
                    is_one = 1;
                    break;
                }
            }
            if(is_one)
            {
                cout << n << " 0";
            }
            else
            {
                cout << n << " " << n - 1;
            }
        }
        else
        {
            bool is_two = 0;
            for(int j=1;j<=n-1;j++)
            {
                if(arr[j] == 2)
                {
                    is_two = 1;
                    break;
                }
            }
            if(is_two)
            {
                cout << "0 " << n;
            }
            else
            {
                coutr << n - 1 << " " << n;
            }
        }
    }
    return 0;
}