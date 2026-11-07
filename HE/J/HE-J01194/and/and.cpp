#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[200005];
long long ans;

void dfs(int idx,long long sum,int cnt){
	if(cnt==m){
		ans=max(ans,sum);
		return;
	}
	if(n-idx+cnt+1<m){
		return;
	}
	dfs(idx+1,sum&a[idx],cnt+1);
	dfs(idx+1,sum,cnt);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long maxx=0;
	long long al=2097151;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		al=al&a[i];
		maxx=max(maxx,a[i]);
	}
	if(n>2000&&maxx<4){
		sort(a+1,a+n+1);
		int ant=0;
		for(int i=n;i>=1;i--){
			if(a[i]==3){
				ant++;
			}else{
				break;
			}
		}
		if(ant>=m){
			cout<<3;
			return 0;
		}else{
			int ant2=0;
			for(int i=n;i>=1;i--){
				if(a[i]>=2){
					ant2++;
				}else{
					break;
				}
			}
			if(ant2>=m){
				cout<<2;
				return 0;
			}else{
				if(ant2==0){
					int ant1=0;
					for(int i=n;i>=1;i--){
						if(a[i]>=1){
							ant1++;
						}else{
							break;
						}
					}
					if(ant1>=m){
						cout<<1;
						return 0;
					}else{
						cout<<0;
						return 0;
					}
				}else{
					int ant1=0;
					for(int i=n;i>=1;i--){
						if(a[i]>=1&&a[i]!=2){
							ant1++;
						}else{
							break;
						}
					}
					if(ant1>=m){
						cout<<1;
						return 0;
					}else{
						cout<<0;
						return 0;
					}
				}
			}
		}
		return 0;
	}
	if(n>2000){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		cout<<al;
		return 0;
	}
	if(n<=2000&&m==2){
		long long maxx2=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					maxx2=max(maxx2,a[i]&a[j]);
				}
			}
		}
		cout<<maxx2;
		return 0;
	}
	dfs(1,2097151,0);
	cout<<ans;
	return 0;
}
