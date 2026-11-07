#include<bits/stdc++.h> 
using namespace std;
int a[500005];
long long w[32];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long int s=a[n],j=n;
	for(int i=1;i<=m-1;i++){
		j--;
		cout<<a[j];
		s=s&a[j];
	}
	cout<<s;
}