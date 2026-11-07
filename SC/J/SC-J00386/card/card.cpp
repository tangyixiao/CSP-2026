#include <iostream>
using namespace std;

int a[500005] , b[500005] , cnt[300005] , top[300005];
bool z[300005];
int main()
{
    //freopen("card.in","r",stdin);
    //freopen("card.out","w",stdout);
    int n , m;
    cin >> n >> m;
    for(int  i= 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        int k = i;
        for(int j = i; j <= n; j++)
        {

            if(z[a[j]] == 0){
                b[k]=a[j];
                z[a[j]]=1;
                top[a[j]]=k;
            }
            else{
                int d = top[a[j]];
                for(int w = top[a[j]]; w <= k;w++)
                {
                    b[w]=0;
                    z[b[w]]=0;
                    top[b[w]]=0;
                }
                k=d;
                b[k]=a[j];
                z[a[j]]=1;
                top[a[j]]=d;
            }
            k++;
        }
        for(int j = i; j <= k; j++)
        {
            cnt[b[j]]++;
            z[b[j]]=0;
            b[j]=0;
        }
    }
    for(int i = 1; i <= m; i++)
    {
        cout << cnt[i] << " ";
    }

    return 0;
}
