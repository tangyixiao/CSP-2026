#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	string nm="";
	for(int i=0;i<n;i++){
		int a;
		char b;
		cin>>a>>b;
		for(int i=0;i<a;i++){
			nm+=b;
		}
	}string mn="";
	int len=nm.size();
	for(int i=len-1;i>=0;i--){
		mn+=nm[i];
	}
	if(mn==nm){
		cout<<0;
		return 0;
	}else{
		int lenn=len-1;
			for(int i=0;i<len/2;i++){
				if(nm[i]!=nm[lenn]){
					cnt++;
				}lenn--;
			}
		}
	cout<<cnt;
	return 0;
	 
} 

