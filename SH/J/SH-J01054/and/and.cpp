#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100010],t,crt=1;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	t=a[1];
	for(int i=2;i<=n;i++){
		if(crt==m){
			cout<<t;
			return 0;
		}else if(a[i]!=t)crt+=1,t=a[i];
	}
	return 0;
}
