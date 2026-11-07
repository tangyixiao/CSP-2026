#include<bits/stdc++.h>
using namespace std;
long long n,a[2000000],ans=0,all=0;
char S[2000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)cin>>a[i]>>S[i];
	long long ll=1,rl=n,right=0,left=0;
	while(rl>0&&ll<=n){
		if(a[ll]>a[rl]){
			a[ll]-=a[rl];
			rl--;
			if(S[ll]!=S[rl])ans+=a[ll];
		}
		else if(a[ll]<a[rl]){
			a[rl]-=a[ll];
			ll++;
			if(S[ll]!=S[rl])ans+=a[rl];
		}
		else if(a[ll]==a[rl]){
			ll++;
			rl--;
			if(S[ll]!=S[rl])ans+=a[ll];
		}
		if(ll-1==rl)break;
	}
	cout<<ans;
	return 0;
}









