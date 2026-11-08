#include<bits/stdc++.h>
using namespace std;
long long a[10000];
bool cmp(int x,int y){
	return x<y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[3];
		return 0;
	}
	return 0;
}

