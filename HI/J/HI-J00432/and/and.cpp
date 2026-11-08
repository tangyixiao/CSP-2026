#include<bits/stdc++.h>
using namespace std;
int yu[200005];
int a[200005];
int main(){
	freopen("and.in","r","stdin");
	freopen("and.out","w","stdout");
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>yu[i];
	}
	sort(yu+0,yu+n);
	cout<<yu[n-2];
	return 0;
}
