#include<bits/stdc++.h>
using namespace std;
char num;
int sum;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    bool h = 0;
    bool flag = 1;
    int n;
    cin >> n;
    vector<int> a(n);
    if(n % 2 != 0)
    {
        n += 1;
        h = 1;
    }
    for(int i = 1;i <= n;i++)
    {
        int l;
        char r;
        if(h && i == n)
        {
            break;

        }
        if(i == 1)
        {
            r = num;
        }
        if(r != num)    flag = 0;
        num = r;

        cin>>l >>r;
        sum += l;
    }
    if(flag)
    {
        cout << 0;
        return 0;
    }
    cout << (sum /2);
    return 0;
}
