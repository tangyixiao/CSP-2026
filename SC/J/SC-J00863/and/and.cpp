#include<bits/stdc++.h>
using namespace std;
int n,m,a[200020],b[200020];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++){
		b[i]=a[i];
	}
	int s=b[1];

	for(int i=2;i<=m;i++){
		s=s&b[i];
	
	}
	cout<<s;
	return 0;
} 