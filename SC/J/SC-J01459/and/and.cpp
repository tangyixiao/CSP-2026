#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>=y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long num[n+1];
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	sort(num+1,num+n+1,cmp);
	int ans=num[1];
	for(int i=2;i<=m;i++){
		ans=ans&num[i];
	}
	cout<<ans;
	return 0;
}