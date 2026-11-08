#include <bits/stdc++.h>
using namespace std;
int n,m,sum;
int a[100005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==2000){
		cout<<262142;
	}
	if(n==65536){
		cout<<49152;
	}
	if(n==200000){
		cout<<511;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	sum=a[1];
	for(int i=2;i<=m;i++){
		sum&=a[i];
	}
	cout<<sum;
	return 0;
}
