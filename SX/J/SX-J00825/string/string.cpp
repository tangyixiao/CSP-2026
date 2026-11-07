#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int n;
ll a[N];
char c[N];
ll ans;
ll h;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	char op[1];
	for(int i=1;i<=n;i++){
		scanf("%lld%s",&a[i],op);
		c[i]=op[0];
	}
	int j=n+1;
	for(int i=1;i<=j;i++){
		if(i==j) break;
		while(a[i]!=0){
			if(a[j]==0)j--;
			if(i==j) break;
			if(c[i]!=c[j]){
				ans+=min(a[i],a[j]);
			}
			if(a[i]>a[j]){
				a[i]-=a[j];
				a[j]=0;
			}else if(a[i]==a[j]){
				a[i]=0;
				a[j]=0;
				break;
			}else{
				a[j]-=a[i];
				a[i]=0;
				break;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
