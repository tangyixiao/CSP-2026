#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],s,v,q,w,e,r,t,y,u,i,o,p;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	else if(m==2){
		for(int q=1;q<=n;q++)for(int w=1;w<=n;w++)if(s<a[q]&a[w])s=a[q]&a[w];
	}
	else if(m==3){
		for(int q=1;q<=n;q++)for(int w=1;w<=n;w++)for(int e=1;e<=n;e++)
		if(s<a[q]&a[w]&a[e])s=a[q]&a[w]&a[e];
	}
	else if(m==4){
		for(int q=1;q<=n;q++)for(int w=1;w<=n;w++)for(int e=1;e<=n;e++)for(int r=1;r<=n;r++)
		if(s<a[q]&a[w]&a[e]&a[r])s=a[q]&a[w]&a[e]&a[r];
	}
	else if(m==5){
		for(int q=1;q<=n;q++)for(int w=1;w<=n;w++)for(int e=1;e<=n;e++)for(int r=1;r<=n;r++)for(int t=1;t<=n;t++)
		if(s<a[t]&a[q]&a[w]&a[e]&a[r])s=a[q]&a[w]&a[e]&a[r]&a[t];
	}
	cout<<s;
	return 0;
}
