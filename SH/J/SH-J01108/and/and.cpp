#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10000000];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1,cmp);
	cout<<a[m-1];
	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/
