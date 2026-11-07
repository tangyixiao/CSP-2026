#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long

int a[200005];
int n;

bool cmp(int x,int y){
	return x>y;
}

int findmax(){
	int ans=0;
	int pos=0;
	for(int i=0;i<n;i++){
		if(a[i]>ans){
			pos=i;
			ans=a[i];
		}
	}
	a[pos]=0;
	//cout<<pos<<'\n';
	return ans;
}

int workall(int m){
	int ans=0;
	for(int i=0;i<n;i++){
		if(a[i]>ans){
			ans=a[i];
		}
	}
	int maxx=ans;
	for(int i=0;i<m;i++){
		maxx=maxx&findmax(); 
	}
	return maxx;
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<findmax();
	}
	else if(m==2 && n<=2000){
		int maxx=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==i)continue;
				maxx=max(a[j]&a[i],maxx);
			}
		}
		cout<<maxx;
	}
	else if(m==n){
		int ans=a[0];
		for(int i=1;i<n;i++){
			ans&=a[i];
		}
	}
	else if(m==n-1){
		sort(a,a+n,cmp);
		int t=0,ans=0;
		for(int i=0;i<n;i++){
			int res=8589934592;
			for(int j=0;j<n;j++){
				if(j==i)continue;
				t++;
				if(t>=700000000)goto bre;
				res&=a[j];
			}
			ans=max(res,ans);
		}
		bre:
			int maxx=workall(m);
			cout<<max(maxx,ans);
	}else if(m==2){
		int ans=0,t=0;
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==i)continue;
				t++;
				if(t>=800000000)goto brea;
				ans=max(a[j]&a[i],ans);
			}
		}
		brea:
			int maxx=workall(m);
			cout<<max(maxx,ans);
	}else{
		cout<<workall(m);
	}
	return 0;
}