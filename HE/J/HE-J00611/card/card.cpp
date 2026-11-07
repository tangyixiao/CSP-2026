#include<bits/stdc++.h>
using namespace std;
int t[100005],a[100005];
int m;
int r = 0;
int cnt[500005];
void x(int c,int b)
{
    for(int i = c;i <= b;i++)
    {
        a[i] == 0;
        r--;
    }
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n;
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        bool xn = 1;
        for(int j = i;j <= n;j++)
        {
            for(int l = 1;l <= j;l++)
            {
                if(a[l] == t[j])
                {
                    x(l,r);
                    xn = 0;
                    break;
                }
            }
            if(xn)
            {
                a[r+1] = t[j];
                r++;
            }
        }
        for(int j = 0;j <= m;j++)
        {
            for(int l = 0;l <=r;l++){
                if(a[l] == j)
                    cnt[m]++;
            }
        }
    }
    for(int j = 0;j < m;j++)
    {
        cout << cnt[m] << " ";
    }

    return 0;
}

