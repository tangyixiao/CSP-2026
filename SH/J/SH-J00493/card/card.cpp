#include<bits/stdc++.h>
using namespace std;

int n,m,a[500010];
int box[300010];
int ans[300010];

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin >> n >> m;
    for (int i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 1;i <= n;i++)
    {
        stack<int> st;
        memset(box,0,sizeof box);
        for (int j = i;j <= n;j++)
        {
            if (box[a[j]] % 2 == 0) {st.push(a[j]);box[a[j]]++;}
            else
            {
                while (st.top() != a[j])
                {
                    box[st.top()]--;
                    st.pop();
                }
            }
        }
        for (int j = 1;j <= m;j++)
        {
            ans[j]+=box[j]%2;
        }
    }
    for (int i = 1;i <= m;i++)
    {
        cout << ans[i] << " ";
    }
}
