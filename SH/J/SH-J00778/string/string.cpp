#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
string b[200005];
long long q(long long iz,long long iy,long long sum){
	if(iz==iy){
		return sum;
	}
	if(b[iz]==b[iy]){
		if(a[iz]>a[iy]){
			a[iz]-=a[iy],iy--;
		}else if(a[iz]==a[iy]){
			iy--,iz++;
		}else{
			a[iy]-=a[iz],iz++;
		}
	}else{
		if(a[iz]>a[iy]){
			sum+=a[iy],a[iz]-=a[iy],iy--;
		}else if(a[iz]==a[iy]){
			sum+=a[iz],iy--,iz++;
		}else{
			sum+=a[iz],a[iy]-=a[iz],iz++;
		}
	}
	q(iz,iy,sum);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	cout<<q(1,n,0);
	return 0;
}
