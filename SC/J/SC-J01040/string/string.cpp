#include<bits/stdc++.h>
using namespace std;
char a[10000001],b[1000000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0,w,c=0,d=1;
	char e;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>w>>e;
		for(int j=1;j<=w;j++){
			s++;
			a[s]=e;
		} 
	} 
	for(int i=s;i>=1;i--){
		b[d]=a[i];
		d++;
	}
	for(int i=1;i<=s;i++){
		if(a[i]!=b[i]){
			c++;
		}
	} 
	if(c==0){
		cout<<0;
	}
	else{
		cout<<1;
	}
	return 0;
}