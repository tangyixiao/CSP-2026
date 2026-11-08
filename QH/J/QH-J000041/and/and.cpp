#include<bits/stdc++.h>
using namespace std;
int a[10086];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int ma=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int lin=a[i]&a[j];
			ma=max(ma,lin);
		}
	}
	cout<<ma;
	return 0;
}
