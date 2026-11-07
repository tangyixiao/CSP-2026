#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,start;
    cin >> n >> m;
    bool flag = 1;
    vector<int> a(n);
    for(int i = 0;i <n;i++)
    {
        cin >>a[i];
    }
    for(int i = 0;i< n;i +=1)
    {
        start = a[i];
        for(int j = a[i + 1];j <= a[n];j++)
        {
            flag = 1;
            if((start & j) == 0)
            {
                start= a[i + 1];
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            cout<<start;
            break;
        }
        continue;
    }
    return 0;

}
