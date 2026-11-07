#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;
int n,num[N],sum1[N],sum2[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>c[i]; 
		sum1[i]=sum1[i-1]+num[i];
	}
	for(int i=n;i>=1;i--)sum2[i]=sum2[i+1]+num[i];
	int pos=n,now=1,pre=0,ans=0;
	while(now<pos){
		ans+=(c[now]!=c[pos])*min(sum1[now]-pre,sum2[pos]-pre);
		pre=min(sum1[now],sum2[pos]);
		if(pre==sum1[now])now++;
		if(pre==sum2[pos])pos--;
	}
	cout<<ans;
	return 0;
} 


