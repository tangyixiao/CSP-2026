#include<bits/stdc++.h>
using namespace std;
const unsigned long long N=1e5*2+10;
unsigned long long sum_a[N];
char a[N];
char erfen(unsigned int l,unsigned int r,unsigned int x){
	unsigned int mid=(l+r)/2;
	//cout<<mid<<l<<r<<x<<" "<<sum_a[mid]<<" "<<sum_a[mid-1]<<endl;
	if(sum_a[mid]>=x&&sum_a[mid-1]<x){
		cout<<1<<endl;
		return a[mid];
	}else if(sum_a[mid]<x){
		cout<<2<<endl;
		l=mid+1;
	}else if(sum_a[mid-1]>=x){
		cout<<3<<endl;
		r=mid-1;
	}
	return erfen(l,r,x);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	unsigned long long n;char c;string str;
	cin>>n;
	for(unsigned long long i=1;i<=n;i++){
		cin>>sum_a[i]>>a[i];sum_a[i]+=sum_a[i-1];
		//for(long long j=0;j<a[i];j++) str+=c;
	}
	unsigned long long res=0;
	for(unsigned long long i=1;i<=sum_a[n]/2;i++){
		//cout<<i<<'i'<<endl;
		if(erfen(1,n,i)!=erfen(1,n,sum_a[n]-i+1)) res++;
	}
	cout<<res;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
