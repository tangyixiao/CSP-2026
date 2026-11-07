#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,m,a[N],tmp[N],ans;
void result(){
	int ttmp=a[tmp[1]];
	for(int i=2;i<=m;i++) ttmp&=a[tmp[i]];
//	for(int i=1;i<=m;i++) cout<<tmp[i]<<' ';
//	cout<<endl;
	ans=max(ans,ttmp);
}
void DFS(int step,int last){
	if(step==m+1){
		result();
		return;
	}
	for(int i=last+1;i+(m-step)<=n;i++){
		tmp[step]=i;
		DFS(step+1,i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20){
		ans=-1;
		DFS(1,0);
		cout<<ans<<'\n';
		return 0;
	}
	else if(n<=2000||m<=2||m==n){
		int mx=-1,mmx=-1,aaans=a[1];
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
			if(i!=1) aaans&=a[i];
			for(int j=i+1;j<=n;j++){
				mmx=max(mmx,a[i]&a[j]);
			}
		}
		if(m==1) cout<<mx<<'\n';
		else if(m==2) cout<<mmx<<'\n';
		else if(m==n) cout<<aaans<<'\n';
		return 0;
	}
	else{
		bool is2ks1=true;
		for(int i=1;i<=n;i++){
			if(floor(log2(a[i]+1))!=log2(a[i]+1)){ is2ks1=false; break;}
		}
		if(is2ks1){
			sort(a+1,a+n+1);
			cout<<a[n-m+1]<<'\n';
			return 0;
		}
		
		
		return 0;
	}
    return 0;
}