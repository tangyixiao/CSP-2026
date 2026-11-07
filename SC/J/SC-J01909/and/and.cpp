#include<bits/stdc++.h>
using namespace std;
long long m,n,a[200005],b[200005];
bool cmp(int a,int b){
	if(a>b)
	return true;
	else return false; 
}
int main(){
	
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	b[1]=a[1];
	for(int i=2;i<=m;i++){
		b[i]=(b[i-1]&a[i]);
	}
	cout<<b[m];
	return 0;
} 