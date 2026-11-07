#include<bits/stdc++.h>
using namespace std;
int num[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans=(1<<32)-1;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	for(int i=n-1;i>=n-m;i--){
		ans=ans&num[i];
	}
	cout<<ans;
	return 0;
}