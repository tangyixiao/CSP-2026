#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,num=0,maxnum=0;
	int a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;i<=n;i++){
			num=a[i] and a[j];
			maxnum=max(num,maxnum);
		}
	}
	cout<<a[n];
	return 0;
}
