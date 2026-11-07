#include<bits/stdc++.h>
using namespace std;
int n,m,sss,c1,c2;
int main(){
		freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[n];
	int s[n-m+1]={0};
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n-m+1;i++){
	s[i]=a[i];
	for(int j=0;j<m;j++){
		s[i]=s[i]&a[j];
	}
}
	return 0;
}
