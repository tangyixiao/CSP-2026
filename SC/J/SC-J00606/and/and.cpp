#include<bits/stdc++.h>
using namespace std;
const int N=1000050;
long long a[N]={0};
long long maxx=0;
bool f[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long first=a[i],second=a[j];
			first&=second;
			if(first>maxx){
				maxx=max(maxx,first);
				memset(f,0,sizeof f);
				f[i]=f[j]=1;
			}
				
		}
	}
	m-=2;
	//cout<<"The first maxx is:"<<maxx<<'\n';
//	for(int i=0;i<N;i++){
//		if(f[i]==1) cout<<i<<"was visited\n";
//	}
	long long t=maxx;
	while(m--){
		for(int i=0;i<n;i++){
			if(f[i]==1) continue;
			t&=a[i];
			maxx=max(a[i],t);
			//cout<<"i:"<<i<<" maxx:"<<maxx<<" a[i]:"<<a[i]<<'\n';
		}	
		//cout<<"第m轮:"<<m<<" maxx:"<<maxx<<'\n';
	}
	cout<<maxx;
	return 0;
}