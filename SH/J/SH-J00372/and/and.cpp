#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],choose[30],maxn,ans,mi[35],cont[10];
void dfs(int step,int num){
	if(step==n+1){
		if(num==m){
			int ans1=0;
			for(int i=1;i<=n;i++){
				if(ans1==0&&choose[i]){
					ans1=a[i];
					break;
				}
			}
			for(int i=1;i<=n;i++){
				if(choose[i])
					ans1&=a[i];
			}
			ans=max(ans,ans1);
		}
		return;
	}
	if(num>m)return;
	dfs(step+1,num);
	choose[step]=1;
	dfs(step+1,num+1);
	choose[step]=0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	mi[0]=1;
	for(int i=1;i<=30;i++)mi[i]=mi[i-1]*2;
	cin>>n>>m;
	bool ts1=1,ts2=0,ts3=1;
	for(int i=1;i<=30;i++){
		if(n==mi[i]){
			ts2=1;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bool flag=0;
		for(int j=1;j<=30;j++){
			if(mi[j]-1==a[i]){
				flag=1;
				break;
			}
		}
		if(flag==0)ts1=0;
		if(a[i]!=i-1)ts2=0;
		if(a[i]>=4)ts3=0;
		maxn=max(a[i],maxn);
	}
	
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(n<=20){
		dfs(1,0);
		cout<<ans;
		return 0;
	}
	if(ts2){
		ans=a[n];
		for(int i=a[n];i>a[n]-m;i--)ans&=i;
		cout<<ans;
		return 0;
	}
	if(ts1){
		sort(a+1,a+n+1,greater<int>());
		ans=a[1];
		for(int i=1;i<=m;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(ts3){
		for(int i=1;i<=n;i++){
			cont[a[i]]++;
		}
		if(cont[3]>=m){
			cout<<3;
		}
		else if(cont[3]+cont[2]>=m){
			cout<<2;
		}
		else if(cont[3]+cont[1]>=m){
			cout<<1;
		}
		else cout<<0;
		return 0;
	}
	if(m==n-1){
		sort(a+1,a+n+1);
		int ans1=a[1],ans2=a[2];
		for(int i=1;i<n;i++)ans1&=a[i];
		for(int i=2;i<n;i++)ans2&=a[i];
		cout<<max(ans1,ans2)<<endl;
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
