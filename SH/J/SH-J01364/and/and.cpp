#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	int ber=n/2;
	cout<<num[ber];
	return 0;
}


