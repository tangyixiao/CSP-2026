#include<bits/stdc++.h>
using namespace std;
long long n,m,mxx=-1e9;long long a[200005],dp[200005];
long long dfs(int i,int ans,int num){
	if(i==n+1){
		if(ans!=-1&&num==m){
		//	cout<<ans<<endl;
			return ans;
		}else return -1e9;
	}
	if(dp[i]!=-1)return dp[i];
	
	dp[i]=max(dfs(i+1,ans,num),dfs(i+1,(ans==-1 ? a[i] : (ans&a[i])),num+1));
	return dp[i];
}
int main(){
	
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	bool fl1=true,fl2=true;
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		mxx=max(mxx,a[i]);
		if(a[i]!=i-1)fl2=false;
		if(((a[i]+1)&(a[i]))!=0)fl1=false;
	}
	if(fl1){
		int book[35],p=1;
		for(int i = 0;i < 35;i++)book[i]=0;
		for(int i = 1;i < (1<<21);i*=2){
			for(int j = 1;j<=n;j++){
				if(a[j]==i-1)book[p]++;
			}
			p++;
			//cout<<p<<endl;
		}
		//cout<<p;
		long long sum=0;
		while(sum <m){
			p--;
			
			sum+=book[p];
		}
		//cout<<p<<endl;
		printf("%d",(1<<(p-1))-1);
		return 0;
	}
	if(fl2){
		long long ans=a[n];
		for(int i = n-1;i >n-m;i--){
			ans&=a[i];
		}
		printf("%lld",ans);
		return 0;
	}
	if(mxx<4){
		int book[4];
		for(int i = 1;i <= n;i++){
			book[a[i]]++;
		}
		if(book[3]>=m)printf("3");
		else if(book[3]+book[2]>=m)printf("2");
		else if(book[3]+book[1]>=m)printf("1");
		else printf("0");
		return 0;
	}
	if(m==1){
		long long mx=0;
		for(int i = 1;i <= n;i++){
			mx=max(mx,a[i]);
		}
		printf("%lld",mx);
		return 0;
	}
	if(m==2){
		long long mx=0;
		for(int i = 1;i <= n;i++){
			for(int j = i+1;j <= n;j++){
				mx=max(mx,(a[i]&a[j]));
			}
		}
		printf("%lld",mx);
		return 0;
	}
	if(m==n){
		long long mx=0;
		for(int i = 1;i <= n;i++){
			mx&=a[i];
		}
		printf("%lld",mx);
		return 0;
	}
	if(m==n-1){
		long long mi=1e9;
		for(int i = 1;i <= n;i++){
			mi=min(mi,a[i]);
		}
		long long ans=0;
		for(int i = 1;i <= n;i++){
			if(mi==a[i]){
				mi=-1;
			}else{
				if(ans==0){
					ans=a[i];
				}else{
					ans&=a[i];
				}
			}
		}
		cout<<ans;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		dp[i]=-1;
	}
	printf("%lld",dfs(0,-1,0));
	return 0;
}