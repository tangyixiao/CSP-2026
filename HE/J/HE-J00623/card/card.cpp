#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int a[10001],b[10001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i];
	}
}
