#include<bits/stdc++.h>
using namespace std;
long long n,a[200010];
char c[200010];
long long z;
int js(int x,int y){
	if(x==y){
		cout<<z;
		return 0;
	}
	if(c[x]==c[y]){
		if(a[x]>=a[y]){
			a[x]-=a[y];
			js(x,y-1);
		}
		else{
			a[y]-=a[x];
			js(x+1,y);
		}
	}
	else{
		if(a[x]>=a[y]){
			z+=a[y];
			a[x]-=a[y];
			js(x,y-1);
		}
		else{
			z+=a[x];
			a[y]-=a[x];
			js(x+1,y);
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	js(1,n);
	return 0;
}
