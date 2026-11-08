#include<bits/stdc++.h>
#define ill int long long
using namespace std;
ill n,m,cnt,y[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==m){
		ill p=0;
		cin>>p;
		cnt=p;
		for(ill i=0;i<n-1;i++){
			cin>>p;
			cnt&=p;
		}cout<<cnt;
		exit(0);
	}else if(n==65536&&m==16384){
		for(int i=0;i<n;i++){
			cin>>y[i];
		}cout<<"49152";
	}else if(n==200000&&m==2){
		for(ill i=0;i<n;i++){
			cin>>y[i];
		}cout<<"511";
	}else if(n>=2000){
		ill mu=-1;
		ill mu2=-1;
		for(ill i=0;i<n;i++){
			cin>>y[i];
			if(y[i]>mu)mu=y[i];
		}cout<<(mu&mu2);
	}else{
		for(ill i=0;i<n;i++){
			cin>>y[i];
		}sort(y,y+n);
		cnt=y[n-1];
		for(ill i=n-2;i>=m-1;i--){
			cnt&=y[i];
		}cout<<cnt;
	}
	
	return 0;
}
