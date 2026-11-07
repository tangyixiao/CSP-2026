#include<bits/stdc++.h>
using namespace std;
int m,n;
int f(unsigned long long x,unsigned long long y){
	unsigned long long sum=(x&=y);
	return sum;
}
const int N=2e5+2;
unsigned long long a[N],t[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		unsigned long long sum2=0;
		for(int i=1;i<=n;i++){
		sum2=max(sum2,a[i]);
		}
		cout<<sum2;
		return 0;
	}else if(m==n){
		int sum2=f(a[1],a[2]);
		for(int i=3;i<=n;i++){
			sum2=f(sum2,a[i]);
		}
		cout<<sum2;
		return 0;
	}else if(m==2) {
		unsigned long long cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				cnt++;
				t[cnt]=f(a[i],a[j]);
			}
		}
		unsigned long long sum3=0;
		for(int i=1;i<=cnt;i++){
			sum3=max(sum3,t[i]);
		}
		cout<<sum3;
		return 0;
	}
	return 0;
}