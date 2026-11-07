#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=10000010;
int a[N],n,m;
int dfs(int x,int k,int y){
	if(k==m)return x&a[y];
	int ma=-1;
	for(int i=1;i<=n;i++){
		ma=max(dfs(x&a[y],k+1,i),ma);
	}
	return ma;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool b=true;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int aa=1;
		bool k=false;
		for(int j=1;j<=21&&b==true;j++){
			aa*=2;
			if(aa-1==a[i]){
				k=true;
				break;
			}
		} 
		if(!k)b=false;
	} 
	sort(a+1,a+1+n);
	if(b){
		int ans=a[n]; 
		int cnt=0;
		for(int i=n;i>0;i--){
			ans&=a[i];
			cnt++;
			if(cnt==m)break;
		}
		cout<<ans;
	}
	else if(m==1)cout<<a[n];
	else if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if(m==3){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					ans=max(ans,a[i]&a[j]&a[k]);
			}
		}
		cout<<ans;
	}
	else if(m==4){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						ans=max(ans,a[i]&a[j]&a[k]&a[q]);
			}
		}
		cout<<ans;
	}
	else if(m==5){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]);
		cout<<ans;
	}
	else if(m==6){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							for(int e=w+1;e<=n;e++)
								ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]);
		cout<<ans;
	}
	else if(m==7){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							for(int e=w+1;e<=n;e++)
								for(int r=e+1;r<=n;r++)
									ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]);
		cout<<ans;
	}
	else if(m==8){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							for(int e=w+1;e<=n;e++)
								for(int r=e+1;r<=n;r++)
									for(int t=r+1;t<=n;t++)
										ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]);
		cout<<ans;
	}
	else if(m==9){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							for(int e=w+1;e<=n;e++)
								for(int r=e+1;r<=n;r++)
									for(int t=r+1;t<=n;t++)
										for(int Y=t+1;Y<=n;Y++)
											ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[Y]);
		cout<<ans;
	}
	else if(m==10){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							for(int e=w+1;e<=n;e++)
								for(int r=e+1;r<=n;r++)
									for(int t=r+1;t<=n;t++)
										for(int Y=t+1;Y<=n;Y++)
											for(int U=Y+1;U<=n;U++)
												ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[Y]&a[U]);
		cout<<ans;
	}
	else if(m==11){
		int ans=-1;
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					for(int q=k+1;q<=n;q++)
						for(int w=q+1;w<=n;w++) 
							for(int e=w+1;e<=n;e++)
								for(int r=e+1;r<=n;r++)
									for(int t=r+1;t<=n;t++)
										for(int Y=t+1;Y<=n;Y++)
											for(int U=Y+1;U<=n;U++)
												for(int I=U+1;I<=n;I++)
													ans=max(ans,a[i]&a[j]&a[k]&a[q]&a[w]&a[e]&a[r]&a[t]&a[Y]&a[U]&a[I]);
		cout<<ans;
	}
	else{
		int ans=-1;
		for(int i=1;i<=n;i++){
			ans=max(ans,dfs(a[i],1,i));
		}
		cout<<ans; 
	}
	return 0;
}
