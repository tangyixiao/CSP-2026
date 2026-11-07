#include<bits/stdc++.h>
using namespace std;
const int M=2e5+5;
long long a[M];
char b[M];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long as=0;
	long long l=1,r=n,ls=0,rs=0,lc,rc;
	while(l!=r||!(ls==0||rs==0)){
		//cout<<as<<endl;
		if(ls==0){
			lc=b[l];
			ls=a[l];
			l++;
		}else if(rs==0){
			rc=b[r];
			rs=a[r];
			r--;
		}else{
			long long lk=min(ls,rs);
			ls-=lk;
			rs-=lk;
			if(lc!=rc){
			as+=lk;
			}
		}
	}
	long long yu,nm;
	if(ls!=0){
		yu=lc;
		nm=ls;
	}else{
		yu=rc;
		nm=rs;
	}
	//cout<<l<<"   "<<nm<<"   "<<as<<endl;
	long long nl=max(nm,a[l]),nk=min(nm,a[l]);
	if(yu!=b[l]){
		as+=nk;
	}
	cout<<as<<endl;
}
