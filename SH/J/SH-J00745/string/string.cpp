#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],sum=0,l,r,L,R;
char b[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	L=1;
	R=n;
	while(L<R){
		int x=min(a[L],a[R]);
		if(b[L]!=b[R]){
			sum+=x;
		}
		a[L]-=x;
		a[R]-=x;
		if(a[L]==0){
			L++;
		}
		if(a[R]==0){
			R--;
		}
	}
	
	cout<<sum;
	return 0;
}
