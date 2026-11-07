#include <iostream>
#include <algorithm>
using namespace std;

struct number
{
    int num , s;
};
number a[200005];

int f(int x)
{
    int cnt = 0;
    for(; x > 0 ; x/=2)
    {
        if(x%2){
            cnt++;
        }
    }
    return cnt;
}

bool cmp(number x , number y)
{
    if(x.num != y.num){
        return x.num > y.num;
    }
    return x.s>y.s;
}

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].num;
        a[i].s = f(a[i].num);
    }
    sort(a+1,a+n+1,cmp);
    int ans = a[1].num;
    for(int i = 2; i <= m; i++)
    {
        ans = (a[i].num & ans);
    }
    cout << ans;
    return 0;
}