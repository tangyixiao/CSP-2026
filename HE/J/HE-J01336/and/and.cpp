#include<bits/stdc++.h>
using namespace std;
unsigned n,m,a[2005],maxx=0,ans[200005];
unsigned check(){
	int s=ans[1];
	for(int i=2;i<=m;i++){
		s&=ans[i];
	}
	return s;
}
void qpl(int x,int l){
	if(x==m) maxx=max(maxx,check());
	if(l>n) return;
	for(int i=l;i<=n;i++){
		ans[x]=a[i];
		qpl(x+1,i+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		maxx=0;
		for(int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}else if(m==2){
		maxx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}else if(m==n){
		maxx=a[1];
		for(int i=2;i<=n;i++){
			maxx&=a[2];
		}
		cout<<maxx;
		return 0;
	}else{
		maxx=0;
		qpl(1,1);
		cout<<maxx;
		return 0;
	}
	return 0; 
} 

