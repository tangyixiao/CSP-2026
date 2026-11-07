#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[210000];
bool check(long long x){
	long long cnt(0);
	for (long long i=1;i<=n;i++){
		if ((a[i]&x)==x){
			cnt++;
		}
	}
	return cnt>=m;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (long long i=1;i<=n;i++){
		cin>>a[i];
	}
	long long l=0,r=(1<<30);
	while(l<r){
		long long mid=(l+r+1)/2;
		if (check(mid)){
			l=mid;
		}
		else{
			r=mid-1;
		}
	}
	cout<<l<<endl;
	return 0;
}
