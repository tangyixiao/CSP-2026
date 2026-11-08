#include <bits/stdc++.h>
using namespace std;

int a[10005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long sum = 0;
	long long n,m;
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	for(int i = 1;i <= m;i++){
		sum = (sum & a[i]);
	} 
	cout<<sum;
	cout<<sum;
	return  0;
}
