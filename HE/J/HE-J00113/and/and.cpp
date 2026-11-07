#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],p[35];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	p[0]=1;
	for(int i = 1;i<=30;i++) p[i]=p[i-1]*2;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	int num=n;
	sort(a+1,a+1+n,cmp);
	for(int i = 30;i>=1;i--){
		int cnt=0,idx=0;
		for(int j = 1;j<=num;j++){
			if(a[j]/p[i-1]%p[i] == 1) cnt++;
		}
		if(cnt>=m){
			for(int j = 1;j<=num;j++){
				if(a[j]/p[i-1]%p[i] == 1) a[++idx]=a[j];
			}
			num=cnt;
		}
	}
	int ans=a[1];
	//cout<<a[1]<<'\n';
	for(int i = 2;i<=m;i++){
		ans&=a[i];
		//cout<<a[i]<<'\n';
	}
	cout<<ans;
	return 0;
}
