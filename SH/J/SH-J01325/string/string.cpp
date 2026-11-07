#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 200005
int a[MAXN],b[MAXN];
int n,sum,p,mid,k,f,g,t,tail;
char c;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>c;
		sum+=p;
		a[i]=sum;
		b[i]=c-'a'+1; 
	}
	if(sum%2==0)
	mid=sum/2+1;
	else
	mid=sum/2+2;
	k=lower_bound(a+1,a+n+1,mid)-a;
	g=lower_bound(a+1,a+n+1,sum-a[k]+1)-a;
	t=sum-mid+1;
	tail=lower_bound(a+1,a+n+1,sum-mid+1)-a;
	if(b[k]==b[tail]) t-=sum-mid+1-a[tail-1];
	for(int i=tail-1;i>g;i--){
		if(b[k]==b[i])t-=a[i]-a[i-1];
	}
	if(b[g]==b[k]&&g!=tail) t-=(a[g]-sum+a[k]);
	for(int i=k+1;i<=n;i++){
		f=g;
		g=lower_bound(a+1,a+n+1,sum-a[i]+1)-a;
		if(b[i]==b[f]) t-=sum-a[i]+1-a[f-1];
		for(int j=f-1;j>g;j--){
			if(b[i]==b[j])t-=a[j]-a[j-1];
		}
		if(b[g]==b[i]&&g!=f)t-=(a[g]-sum+a[i]);
	}
	cout<<t;
	return 0;
} 
