#include<bits/stdc++.h>
using namespace std;
int a[200010][40];
int n,m;
bool l[200010];
void change(int n,int k){
	int i=1;
	while(i<=30){
		a[n][i]=k%2;
		k=k/2;
		i++;
	}
}
int add(int k){
	int ans=1;
	for(int i=1;i<=k;i++) ans=ans*2;
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) l[i]=true;
	int ans=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		change(i,x);
	}
	for(int i=30;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++) if(a[j][i]&&l[j]) cnt++;
		if(cnt<m) continue;
		ans+=add(i-1);
		for(int j=1;j<=n;j++) if(!a[j][i]) l[j]=false; 
	}
	cout<<ans<<endl;
	return 0;
} 
