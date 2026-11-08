#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int cnt=a[1]&a[2];
	m=m-2;
	while(m>0){
		for(int i=3;i<=n;i++){
			cnt=cnt&a[i];
			m--;
		}	
	}
	cout<<cnt;
	return 0;
}
