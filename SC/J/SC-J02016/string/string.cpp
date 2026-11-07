#include<iostream>
using namespace std;
//long long change(string s[],long long len,bool b,int n){
//	long long sum1=0,sum2=LONG_LONG_MAX,begin=len/2;
//	if(b){
//		for(long long j=1;begin-j>=0&&begin+j<len;j++){
//			if(s[begin-j]!=s[begin+j]){
//				sum1++;
//			}
//		}
//		sum2=min(sum2,sum1);
//		return sum2;
//	}
//	begin--;
////	for(int i=0;i<len;i++){
////		for(int j=1;i-j>=0&&i+j+1<len;j++){
////			if(s[i-j]!=s[i+j+1]){
////				return 0;
////			}
////		}
////	}
////	return 1;
//	for(long long j=1;begin-j>=0&&begin+j+1<len;j++){
//		if(s[begin-j]!=s[begin+j+1]){
//			sum1++;
//		}
//	}
//	sum2=min(sum2,sum1);
//	return sum2;
//}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,as=0;
	cin>>n;
	char c[n];
	long long a[n];
//	string s[n];
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c[i];
//		as+=a;
//		for(int j=0;j<a;j++)s[i]+=c;
	}
//	bool b=as%2;
//	cout<<change(s,as,b,n);
	for(long long i=0,k=n-i-1;i<k;){
		if(a[i]>a[k]){
			long long sum=0;
			long long j=0;
			while(sum<=a[i]){
				sum+=a[k-j];
				if(c[i]!=c[k-j])as+=a[k-j];
				j++;
			}
			if(sum>a[i]){
				j--;
				a[k-j]-=sum-a[i];
				if(c[i]!=c[k-j])as-=sum-a[i];
			}
			k-=j;
			i++;
		}else if(c[i]!=c[k]&&a[i]==a[k]){
			as+=a[i];
			i++;
			k--;
		}else if(a[i]<a[k]){
			long long sum=0;
			long long j=0;
			while(sum<=a[k]){
				sum+=a[i+j];
				if(c[k]!=c[i+j])as+=a[i+j];
				j++;
			}
			if(sum>a[k]){
				j--;
				a[i+j]-=sum-a[k];
				if(c[k]!=c[i+j])as-=sum-a[k];
			}
			i+=j;
			k--;
		}
	}
	cout<<as;
	return 0;
}
