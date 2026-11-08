#include<bits/stdc++.h>
using namespace std;
int n,m,c;
int a[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>m;
for(int i=0;i<n;i++){
	cin>>a[i];
}
sort(a,a+n,cmp);
for(int i=0;i<n;i++){
	if(i==m){
		cout<<a[i-1];
	}
}
	return 0;
}
