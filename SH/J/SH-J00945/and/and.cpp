#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n,m;
string er[200005];
struct node
{
    int cnt,num;
}b[200005];

bool cmp(node x,node y)
{
	if(x.cnt!=y.cnt)
    	return x.cnt > y.cnt;
    return x.num > y.num;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> b[i].num;
        int t=b[i].num;
        int ans = 0;
        while(t)
        {
            if(t%2) ans=ans+er[i].length();
            er[i] = char((t%2)+'0')+er[i];
            t/=2;
        }
        b[i].cnt = ans;
    }
    sort(b+1,b+n+1,cmp);
    int answer=-1;
    for(int i=2;i<=m;i++)
    {
        if(answer=-1) answer=b[i].num&b[i-1].num;
        else answer = answer&b[i].num;
    }
    cout << answer;
    return 0;
}
