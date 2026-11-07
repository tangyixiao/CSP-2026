#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int fl[N],t[N][35],d[N],maxw;
void f(int x,int idx){
	int w=0;
	while(x){
		w++;
		t[idx][w]=x%2;
		x/=2;
	}
	maxw=max(maxw,w);
	return ;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		f(a,i);
		fl[i]=1;
	}
	int s;
	for(int i=maxw;i>=1;i--){
		s=0;
		for(int j=1;j<=n;j++){
			if(fl[j]) s+=t[j][i];
		}
		if(s>=m){
			for(int j=1;j<=n;j++){
				if(t[j][i]==1 && fl[j]) fl[j]=1;
				else fl[j]=0;
			}
			d[i]=1;
		}
	}
	int ans=0;
	for(int i=maxw;i>=1;i--){
		ans+=d[i]*(1<<(i-1));
	}
	cout<<ans;
	return 0;
}
