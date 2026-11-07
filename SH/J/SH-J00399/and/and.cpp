#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
int n,m,a[N];
bool use[N];
int p(int x,int y){
	return (x>>y)%2;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int sum=0;
	for(int i=1;i<=n;i++) cin>>a[i],use[i]=true;
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++) if(use[j]) cnt+=p(a[j],i);
		if(cnt>=m){
			for(int j=1;j<=n;j++) if(use[j]) if(p(a[j],i)==0) use[j]=false;
			sum+=(1<<i);
		}
	}
	cout<<sum<<endl;
	return 0;
}
