#include<bits/stdc++.h>
using namespace std;
long long l,ans,n;
struct st{
	char c;
	long long le;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i].le);
		cin>>a[i].c;
		l+=a[i].le;
	}
	int flag=n;
	for(int i=1;i<flag;){
		if(a[i].le>=a[flag].le){
			if(a[i].c!=a[flag].c)ans+=a[flag].le;
			a[i].le-=a[flag].le;
			flag--;
		}
		else{
			if(a[i].c!=a[flag].c)ans+=a[i].le;
			a[flag].le-=a[i].le;
			i++;
		}
	}
	printf("%lld",ans);
	return 0;
}