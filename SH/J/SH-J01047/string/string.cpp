#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
using ll=long long;
ll a[N];
int n;
char c[N];
ll len,now,ans;
queue <pair<int,char>> q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		scanf("%s",&c[i]);
		len+=a[i];
	}
	for(int i=1;now<len/2;i++){
		q.push({a[i],c[i]});
		now+=a[i];
	}
	ll k=0;
	char s;
	now=len;
	for(int i=n;now>len+1>>1;){
		//cout<<k<<" ";
		if(k==0){
			k=q.front().first,s=q.front().second;
			q.pop();
		}
		ll m=min(k,a[i]);
		if(c[i]!=s){
			ans+=m;
		}
		
		now-=m;
		k-=m;
		a[i]-=m;
		if(a[i]==0)i--;
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
