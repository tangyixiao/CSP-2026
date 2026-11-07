#include<bits/stdc++.h>
using namespace std;
int n,m,f[200005],ans;
int t(int a,int c){
	int s=0;
	int p=0;
	if(c==1){
		return f[a];
	}
	for(int i=a+1;i<=n;i++){
		p=f[i]&t(i,c-1);
		if(p>s){
			s=p;
		}
	}
	return p;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>f[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(f[i],ans);
		}
		cout<<ans;
	}
	else if(m==n){
		ans=f[1]&f[2];
		for(int i=3;i<=n;i++){
			ans=ans&f[i];
		}
		cout<<ans;
	}
	else{
		cout<<t(0,m);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
