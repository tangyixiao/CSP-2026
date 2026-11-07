#include<bits/stdc++.h>
using namespace std;
int erjinzhi(int x){
	int ans;
	ans+=ans*10+x%2;
	x/=2;
	return ans;
}
//int he(int x,int y){
	
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005],f[200005],minn=0x3f3f3f3f;
	string b[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<minn)minn=a[i];
		b[i]=erjinzhi(a[i]);
	}
	f[1]=0;
//	for(int i=1;i<=n;i++){
//		for(int j=i;j<=)
//	}
	cout<<minn;	
																														
}
