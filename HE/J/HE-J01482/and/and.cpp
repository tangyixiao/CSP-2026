#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	int z;
	for(int i=1;i<m;i++){
		a[i]=a[i-1]&a[i];
	}
	cout<<a[m];
	return 0;
} 
