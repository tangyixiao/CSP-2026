#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b; 
}
long long a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(m==1){
		cout<<a[1];
	}
	return 0; 
}
