#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int q,int w){
	if(q!=w){
		return q>w;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+0,a+n,cmp);
	int c=a[0];
	for(int i=1;i<m;i++){
		c&=a[i];
	}
	cout<<c;
	return 0;
}
