#include<bits/stdc++.h>
using namespace std;
long long k[200005],flag1=1,flag2=1,mx=-1,n,m,ak=-1;
int qp(int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans*=2;
	}return ans;
}void solve(int ch,int o,long long ans){
	if(ch==m){
		ak=max(ak,ans);
		return;
	}if(o>n){
		return;
	}
	
	solve(ch,o+1,ans);
	if(ans==0)ans=k[o];
	else ans=(ans&k[o]);
	solve(ch+1,o+1,ans);
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>k[i];
		if(((k[i]+1)&k[i])!=0)flag1=0;
		if(k[i]>3)flag2=0;
		mx=max(mx,k[i]);
	}if(n<=20){
		solve(0,1,0);
		cout<<ak;
		return 0;
	}
	if(m==n){
		long long ans=k[1];
		for(int i=2;i<=n;i++)ans=(ans&k[i]);
		cout<<ans;
		return 0;
	}if(m==1){
		cout<<mx;
		return 0;
	}if(m==2){
		mx=-1;
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,(k[i]&k[j]));
			}
		}cout<<mx;
		return 0;
	}if(flag1){
		int ggs[31]={0};
		for(int i=1;i<=n;i++){
			ggs[int(log2(k[i]+1))]++;
		}int cnt=0;
		for(int i=25;i>=1;i--){
			cnt+=ggs[i];
			if(cnt>=m){
				cout<<qp(i)-1;
				break;
			}
		}return 0;
	}if(flag2){
		int knt[4]={0};
		for(int i=1;i<=n;i++){
			knt[k[i]]++;
		}if(knt[3]>=m)cout<<3;
		else if(knt[3]+knt[2]>=m)cout<<2;
		else if(knt[3]+knt[1]>=m)cout<<1;
		else cout<<0;
		return 0;
	}
	
	return 0;
}
