#include<bits/stdc++.h>
using namespace std;
char c1[900000000],c2[900000000],a1[100000000];
int num,x=0,cnt=0,a2[100000],n,t=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a2[i]>>a1[i];
		for(int u=0;u<a2[i];u++){
			c2[t]=a1[i];
			t++;
		}
	}
	num=strlen(c2);
	for(int i=num-1;i>=0;i--){
		c1[x]=c2[i];
		x++;
	}
	for(int i=0;i<num;i++){
		if(c2[i]!=c1[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
