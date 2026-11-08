#include<bits/stdc++.h>
using namespace std;
long long a[500005],b[300005];
int main(){
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			b[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}
