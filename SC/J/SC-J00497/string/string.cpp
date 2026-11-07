#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,i1,i2,ss1=0,ss2=0,sum=0,sss=0;
	cin>>n;
	long long a[n],ss=0;
	char b[n];
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
		ss+=a[i];
	}
	char sa=b[0],sb=b[n-1];
	i1=0;
	i2=0;
	ss1=a[0];
	ss2=a[n-1];
	for(;sss+1<ss;){
		if(sa==sb){
			
		}else{
			sum++;
		}
		sss+=2;
		ss1--;
		ss2--;
		if(ss1==0){
			ss1=a[i1+1];
			i1++;
			sa=b[i1];
		}
		if(ss2=0){
			ss2=a[n-1-i2];
			i2++;
			sb=b[n-1-i2];
		}
	}
	cout<<sum;
	return 0;
}