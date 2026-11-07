#include <bits/stdc++.h>
using namespace std;
int n,ax,cnt=0,ix=0,nm=1;
long long l[9999];
char a[200005],b[200005],c[200005],m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ax;
		cin>>m;
		if(m=='a'){
			for(int i=nm;i<=ax+nm;i++){
				l[i]=1;	
				cout<<1;	
			}
		}
		if(m=='b'){
			for(int i=nm;i<=ax;i++){
				l[i]=2;	
				cout<<2;
			}
		}
		if(m=='c'){
			for(int i=nm;i<=ax;i++){
				l[i]=3;	
			}
		}
		nm+=ax;
	}
	cout<<nm;
	for(int i=0;i<nm;i--){
		if(l[i]!=l[nm-i]){
			cnt++;
		}
	} 
	cout<<cnt+1;
	return 0;
} 
