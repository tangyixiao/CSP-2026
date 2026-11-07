#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
long long ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int i=1,j=n,cnti=a[i],cntj=a[n];
	while(i<j){
//		cout<<i<<':'<<cnti<<' '<<j<<':'<<cntj<<'\n';
		int v=min(cnti,cntj);
		if(c[i]!=c[j]){
			ans+=v;
		}
		cnti-=v;
		cntj-=v;
		if(cnti==0)i++,cnti=a[i];
		if(cntj==0)j--,cntj=a[j];
	}
	cout<<ans;
	return 0;
} 