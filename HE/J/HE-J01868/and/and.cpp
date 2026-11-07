#include<bits/stdc++.h>
using namespace std;
const int N=1e5*2+1;
int b[N],*a[N];
int n,m;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(b,b+n,cmp);
	if(m==1) cout<<b[0];
	if(m==n){
		int x=b[0];
		for(int i=1;i<m;i++){
			x&=m;
		}
		cout<<x;
	}
	return 0;
}
