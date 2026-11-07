#include <iostream>										
#include <algorithm>
#include <cmath>
using namespace std;
long long n;
long long m;
long long a[1000000];
long long ans=0;
void mj(long long c,long long num,long long st){
	if(c==m){
		if(num>ans){
			ans=num;
		}
		return ;
	}
	for(int i=st+1;i<=n;i++){
		mj(c+1,num&a[i],i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		mj(1,a[i],i);
	}
	cout<<ans;
	return 0;
}
