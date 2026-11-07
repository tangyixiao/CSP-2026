#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;


int n,m;
long long a[N];
long long ans,sum;

bool cmp(int x,int y){
	return x>y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long j=1;
	j<<=30;
	for(;j;j>>=1){
		for(int i=1;i<=n;i++){
			if(a[i]&j)a[i]-=j;
		}
		sort(a+1,a+1+n,cmp);
		sum=a[1];
		for(int i=2;i<=m;i++){
			sum&=a[i];
		}
		ans=max(sum,ans);
	}
	cout<<ans;
	return 0;
} 