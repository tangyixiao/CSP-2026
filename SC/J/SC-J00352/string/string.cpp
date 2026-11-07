#include<bits/stdc++.h>
#define N 200005
#define int long long
#define endl '\n'
using namespace std;

int n,ans;
struct node{
	int a;
	char c;
}a[N],b[N];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("string.in","r",stdin);
//	freopen("string_my.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i].a,&a[i].c);
	}
	memcpy(b,a,sizeof(b));
	reverse(b+1,b+n+1);
	for(int i=1,j=1;i<=n&&j<=n;){
		int len=min(a[i].a,b[j].a);
		a[i].a-=len;
		b[j].a-=len;
		if(a[i].c!=b[j].c) ans+=len;
		if(a[i].a==0) i++;
		if(b[j].a==0) j++;
	}
	printf("%lld",ans>>1);
	return 0;
}//知颖你太美