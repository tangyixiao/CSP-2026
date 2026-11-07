#include <bits/stdc++.h>
using namespace std;
const int N=1e+6;
int n,m;
int a[N];
string b,c;
int d=0;
bool fun(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n,fun);
	for(int i=1;;i++){
		if(a[1]==0){
			break;
		}
		b+=a[1]%2;
		a[1]/=2;
	}
	for(int i=2;i<=m;i++){
		for(int j=1;;j++){
			if(a[i]==0){
				break;
			}
			c+=a[i]%2;
			a[i]/=2;
		}
		for(int i=1;i<=b.size();i++){
			if(b[i]==c[i]){
				b[i]=0;
			}
		}
		int c;
	}
	for(int i=1;i<=b.size();i++){
		d+=b[i]*2;
		b[i-1]+=d;
	}
	cout<<d;
	return 0;
}
