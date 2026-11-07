#include<bits/stdc++.h>
using namespace std;
int aaa[35];
int er(int n){
    long long x=0;
    if(n==0){
    	return 0;
	}
	if(n==1){
		return 1;
	}
	int a=1;
	while(true){
		if(n==1){
			x+=a;
			break;
		}
		if(n%2==1){
			x+=a;
		}
		n/=2;
		a*=10;
	}
	return x;
} 
int shi(int n){
	long long x=0;
	int a=0;
    while(true){
    	if(n%10==1){
    		x+=aaa[a];
		}
		n/=10;
		if(n==0){
			break;
		}
		a++;
	}
	return x;
} 
int aand(int n,int m){
	long long ans;
	int n1=er(n),m1=er(m);
	int a=1;
	long long x=0;
	while(true){
		if(n1%10==1&&m1%10==1){
			x+=a;
		}
		n1/=10;
		m1/=10;
		a*=10;
		if(n1==0||m1==0){
			break;
		}
	}
	ans=shi(x);
}
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	aaa[0]=1;
	long long anss=0;
	for(int i=1;i<=30;i++){
		aaa[i]=aaa[i-1]*2;
	}
	int nn,mm;
	cin>>nn>>mm;
	int bbb[nn+1];
	for(int i=1;i<=nn;i++){
		cin>>bbb[i];
	}
	sort(bbb+1,bbb+nn+1);
	anss=bbb[nn];
	for(int i=nn;i>=nn-mm+1;i--){
		anss=aand(bbb[i],anss);
	}
	cout<<anss;
	return 0;
}