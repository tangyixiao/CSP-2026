#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200000],mmax=-100000;
long long Q(long long q,long long p,long long num){
	if(q==0)
		return num;
	else
		for(int j=p+1;j<n;j++){
			mmax=max((num&a[j]),num);
			Q(q-1,j,mmax);
		}	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	Q(m,-1,-1);
	cout<<mmax;
	return 0;
} 