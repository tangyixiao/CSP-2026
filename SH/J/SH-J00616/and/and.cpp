#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
int xs(int c,int shu,int sum){
	if(c==m)return sum;
	int sum1=0;
	for(int i=shu+1;i<=n;i++){
		int l=sum&a[i];
		sum1=max(xs(c+1,i,l),sum1);
	}
	return sum1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	for(int i=1;i<=n;i++){
		ans=max(xs(1,i,a[i]),ans);
	}
	cout<<ans;
	return 0;
} 
