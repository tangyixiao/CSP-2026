#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[200005];
long long ans;
int d[25];
int r=1;

void dfs(int k){
	for(int i=d[r-1]+1;i<=n;++i){
		d[r]=i;
//		cout<<d[r]<<"\n";
		r++;
		if(k==m){
//			for(int j=1;j<r;++j){
//				cout<<d[j]<<" ";
//			}
//			cout<<"\n";
			long long tmp=a[d[1]];
//			cout<<tmp<<r;
			for(int j=2;j<r;++j){
				tmp=tmp & a[d[j]];
			}
			ans=max(ans,tmp);
//			cout<<tmp<<"\n";
		}
		else{
			dfs(k+1);
		}
		r--;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1);
		cout<<ans;
	}
//	sort(a+1,a+n+1);
//	for(int i=1;i<=n;++i){
//		cout<<a[i]<<" ";
//	}
	else if(n<=2000){
		sort(a+1,a+n+1);
		if(m==1){
			cout<<a[n];
		} 
		else if(m==n){
			cout<<a[1];
		}
		else{
			ans=0;
			for(int i=1;i<=n;++i){
				for(int j=i+1;j<=n;++j){
					long long tmp=a[i]&a[j];
					ans=max(ans,tmp);
				}
			}
			cout<<ans;
		}
	}
	else{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
