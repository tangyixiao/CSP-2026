#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[214514],ans;
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	//freopen("and4.in","r",stdin);
	//freopen("and4.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=1;i<=m;i++){
		if(m==1){
			cout<<a[i];
			return 0;
		}
		for(int i=1;i<=30;i++){
			if(a[i]==pow(2,i)){
				m++;
				continue;
			}
		}
		ans&=a[i];
	}cout<<ans;
	return 0;
}
