#include<bits/stdc++.h>
using namespace std;
long long int a[200010];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int g=0;
	for(int i=1;i<=m;i++){
		if(i==1)	g=a[i];
		else	g=(g&a[i]);
	}
	cout<<g;
	return 0;
} 
/*
12,15
1100
1111
1100
*/
