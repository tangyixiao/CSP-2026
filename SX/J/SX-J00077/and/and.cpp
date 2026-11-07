#include<bits/stdc++.h>
using namespace std;
long long num[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,mmax=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	mmax=num[n-1];
	for(int i=1;i<=m;i++){
		mmax=mmax&num[n-i];
	}
	cout<<mmax;
	return 0;
}