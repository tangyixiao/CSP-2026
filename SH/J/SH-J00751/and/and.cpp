#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],sz[N],n,m,cnt=0,tmp,go[40],ans=0;
bool h[N][40];
void dfs(int step,int l,int r){
	if(r-l+1<m) return;
	if(step==0){
		int tmp=1;
		for(int i=r;i>=r-m+1;i--){
			tmp=tmp&a[i];
		}
		ans=max(ans,tmp);
		return;
	}
	int cnt=0;
	bool flag=1;
	for(int i=r;i>=l;i--){
		if(sz[i]>=step){
//			cout<<step<<":\n";
			flag=0;
			if(h[i][step]){
				cnt++;
			}
//			cout<<"case: "<<cnt<<endl;
			if(cnt>=m){
				int tmp=a[i+m-1];
				for(int j=i+m-1;j>=i;j--){
					tmp=tmp&a[i];
				}
//				cout<<"tmp: "<<tmp<<endl;
				ans=max(ans,tmp);
//				cout<<"ans: "<<ans<<endl;
				dfs(step-1,i+1,r);
			}
			if((h[i][step])!=1){
				cnt=0;
//				cout<<"!";
			}
		}
	}
	if(cnt>=m){
		int tmp=a[r];
		for(int i=r;i>=r-m+1;i--){
			tmp=tmp&a[i];
		}
		ans=max(ans,tmp);
//		cout<<"ans: "<<ans<<endl;
		dfs(step-1,l,r);
	}
	if(flag){
		int tmp=a[r];
		for(int i=r;i>=r-m+1;i--){
			tmp=tmp&a[i];
		}
		ans=max(ans,tmp);
//		cout<<"ans: "<<ans<<endl;
		dfs(step-1,l,r);
	}
}
void subtask_m2(){
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
	exit(0);
}
void subtask_m1(){
	cout<<a[n];
	exit(0);
}
void subtask_mn(){
	int ans=a[1];
	for(int i=1;i<=n;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	exit(0);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==n) subtask_mn();
	if(m==2 && n<=2000) subtask_m2();
	if(m==1) subtask_m1();
	for(int i=n;i>0;i--){
		tmp=a[i];
//		cout<<a[i]<<' ';
		cnt=0;
		while(tmp>0){
			cnt++;
//			cout<<(tmp&1);
			h[i][cnt]=tmp&1;
			tmp/=2;
			sz[i]++;
		}
//		cout<<h[i][4]<<endl;
//		cout<<endl; 
	}
	dfs(31,1,n);
	cout<<ans;
	return 0;
}
