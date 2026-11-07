#include<bits/stdc++.h>
using namespace std;
long long n;
long long m;
int a[200005];
long long an;

bool cmp(int a,int b){
	return b<a;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];	 
	}
	sort(a,a+n,cmp);
	for(int i=1;i<m;i++){
		an=a[i]&a[i-1];
	}
	cout<<an;
	return 0;
}
