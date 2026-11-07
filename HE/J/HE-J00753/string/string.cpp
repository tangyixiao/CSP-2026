#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	queue<char> dui1;
	queue<char> dui2;	
	long long n,x;
	long long c[26]={0};
	long long d[26]={0};
	cin>>n;
	if(n%2==0){
		for(int i=0;i<n;i++){
			long long a;
			char b;
			cin>>a>>b;
			x=n/2;
			if(i<=x){
				c[b-'a']+=a;
			}else{
				d[b-'a']+=a;
			}
		}	
	}else{
		for(int i=0;i<n;i++){
			long long a;
			char b;
			cin>>a>>b;
			x=n/2+1;
			if(i<x){
				c[b-'a']+=a;
			}else if(1==1){
				d[b-'a']+=a;
			}
		}		
	}

	return 0;
}
