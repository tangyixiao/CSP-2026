#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200009],ans=0,n,m;
void dfs(int x,int ch,int now){
	if(ch==m){
		ans=max(ans,now);
		return;
	}
	if(x==n+1) return;
	dfs(x+1,ch,now);
	dfs(x+1,ch+1,(ch==0?a[x]:now&a[x]));
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int maxx=0;cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		if(a[i]!=i-1) flag=0;
	}
	if(n<=20){
		dfs(1,0,0);
		cout<<ans<<endl;
	}else if(n<=2000){
		if(m==1){
			int Max=0;
			for(int i=1;i<=n;i++)
				Max=max(Max,a[i]);
			cout<<Max<<endl;
		}else if(m==n){
			int DLMY=a[1];
			for(int i=2;i<=n;i++)
				DLMY&=a[i];
			cout<<DLMY<<endl;
		}else if(m==2){
			int Max=0;
			for(int i=1;i<=n;i++)
				for(int j=i+1;j<=n;j++)
					Max=max(Max,a[i]&a[j]);
			cout<<Max<<endl;
		}
	}else{
		if(maxx<=4){
			int n_1=0,n_2=0,n_3=0;
			for(int i=1;i<=n;i++){
				if(a[i]==1) n_1++;
				if(a[i]==2) n_2++;
				if(a[i]==3) n_3++;
			}
			if(n_3>=m) cout<<3<<endl;
			else if(n_3+n_2>=m) cout<<2<<endl;
			else if(n_3+n_1>=m) cout<<1<<endl;
			else cout<<0<<endl;
		}else if(flag){
			int DLMY2=a[n];
			for(int i=n-1;i>=n-m+1;i--)
				DLMY2&=a[i];
			cout<<DLMY2<<endl;
		}else{
			sort(a+1,a+1+n);
			int DLMY3=a[n];
			for(int i=n-1;i>=n-m+1;i--)
				DLMY3&=a[i];
			cout<<DLMY3<<endl;
		}
	}
	return 0;
}
