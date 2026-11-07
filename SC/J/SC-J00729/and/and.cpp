#include<bits/stdc++.h>
using namespace std;
long long a[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	long long ans=0;
	for(int i=29;i>=-1;i--){
		long long num;
		if(i>=0) num=ans|(2<<i);
		else num=ans|1;
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(num>a[j]) break;
			long long t=a[j]&num;
			if(t==num){
				cnt++;
			}
			if(cnt>=m) break;
		}
		if(cnt>=m) ans=num;
	}
	cout<<ans;
	return 0;
}