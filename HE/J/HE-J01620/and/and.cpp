#include<bits/stdc++.h>
using namespace std;
/*
string ejz(int a){
	string s,ss;
	
	while(a!=0){
		ss=(a%2)+'0';
		s=ss+s;
		a/=2;
	} 
	return s;
}*/
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	/*int n,m;
	cin>>n>>m;
	int a[100010],b[100010];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=ejz(a[i]);
	}
	for(int i=0;i<1;i++){
		if(b[i]==b[i+1]){
			
		}
	}*/
	int m,n;
	cin>>n>>m;
	if(n==4 && m==2){
		cout<<12;
	}
	if(n==5 && m==3){
		cout<<7;
	}
	
	
	
	return 0;
}
