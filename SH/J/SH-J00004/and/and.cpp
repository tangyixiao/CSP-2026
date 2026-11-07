#include<bits/stdc++.h>
using namespace std;
long long n=0,m=0,all[2000009]={};
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>all[i];
	}
	sort(all+1,all+n+1,cmp);
	cout<<all[m];
	return 0;
}
