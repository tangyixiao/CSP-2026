#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=2e5+5;
struct s{
	int len;
	char c;
};
s a[MAXN];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int N;
	ll ans=0;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d%s",&a[i].len,&a[i].c);
	}
	int st=1,en=N;//所指的字符块
	int m=a[st].len,n=a[en].len;//m是st中剩下的字符数，n是en中剩下的字符数 
	while(st<en)
	{
		if(m>n)
		{
			if(a[st].c!=a[en].c) ans+=n;
			m-=n;
			en--;
			n=a[en].len;
		}
		else if(m<n){
			if(a[st].c!=a[en].c) ans+=m;
			n-=m;
			st++;
			m=a[st].len;
		}
		else if(m==n)
		{
			if(a[st].c!=a[en].c) ans+=m;
			st++;
			en--;
			m=a[st].len;
			n=a[en].len;
		}
//		cout<<ans<<"\n";
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}