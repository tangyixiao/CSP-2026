#include<bits/stdc++.h>
using namespace std;
int anweiyu(int x,int y){
	if(x>y)return x;
	else return y;
}
int cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=-1;
	cin>>n>>m;
	int a[200005];
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}else if(m==n){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		cout<<a[1];
		return 0;	
	}else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
			maxn=anweiyu(a[i],a[i+1]);
		}		
		cout<<maxn;
	}
	return 0;
}