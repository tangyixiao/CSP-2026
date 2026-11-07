#include<bits/stdc++.h>
using namespace std;
int num[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	cout<<num[n-m];
	return 0;
}