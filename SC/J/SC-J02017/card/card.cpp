#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const long long N = 5e5 + 5;
const long long M = 3e5 + 5;
long long n,m,a[N],lst[M],num[M];
bool flag[N];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) scanf("%lld",&a[i]);
    for(int i = 1 ; i <= n ; i++) lst[a[i]] = i;
    for(int i = 1 ; i <= n ; i++)
    {
        if(flag[i]) continue;
        int cnt = 0;
        for(int j = i ; j <= n ; j++)
        {
            if(flag[j] == false)
            {
                flag[j] = true;
                cnt++;
            }
            if(j != lst[a[j]])
            {
                j = lst[a[j]] - 1;
                continue;
            }
            num[a[j]] += cnt;
        }
    }
    for(int i = 1 ; i <= m ; i++) cout << num[i] << " ";
    return 0;
}
