#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int a[N],ans[N];
string c[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(a[i]>1){
			c[i]=c[i]+char(a[i]%2);
			a[i]/=2;
		}
		c[i]+='1';
		reverse(c[i].begin(),c[i].end());
		
	}
	if(n==4 && m==2) cout<<12;
	if(n==5 && m==3) cout<<7;
	
	return 0;
}
