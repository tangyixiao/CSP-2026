#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n,a[200005],b[200005],d[200005],cnt=0;
string c;
bool flag=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<'0';
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<=a[i];j++){
			b[k]=c[i];
			k++;
		}
	}
	int e=0;
	for(int i=k-1;i>=0;i--){
		d[e]=b[i];
		e++;
	}
	for(int i=0;i<e;i++){
		if(b[i]!=d[i]){
			flag=1;
		}
	}
	if(flag==0){
		cout<<'0';
		return 0;
	}
	else{
		for(int i=0;i<k;i++){
			if(b[i]!=b[k-i]){
				cnt++;
			}
		}
		cout<<cnt;
	}
	
	return 0;
}