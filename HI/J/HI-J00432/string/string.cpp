#include<bits/stdc++.h>
using namespace std;
int sz[200005];
char hwc[200005];
int main(){
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	long long n,ans=0;
	cin>>n;
	long long m=0;
	string zong="";
	for(int i=0;i<n;i++){
		cin>>sz[i]>>hwc[i];
		m+=sz[i];
		for(int j=0;j<sz[i];j++){
			zong+=hwc[i];
		}
	}
	if(m%2==0){
		for(int i=m/2;i<m;i++){
			if(zong[i]!=zong[i-m/2])
				ans++;
		}
	}
	if(m%2!=0){
		for(int i=m/2+1;i<m;i++){
			if(zong[i]!=zong[i-m/2-1])
				ans++;
		}
	}
cout<<ans;
	return 0;
}
