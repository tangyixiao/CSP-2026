#include<bits/stdc++.h>
using namespace std;
int ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x[200009];
	int len=0;
	char c[200009];
	cin>>n;
	string str="";
	for(int a=0;a<n;a++){
		cin>>x[a]>>c[a];
		for(int b=0;b<x[a];++b){
			str+=c[a];
		}
		len+=x[a];
	}
	for(int a=0;a<len-len/2;++a){
		if(str[a]!=str[len-a-1]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
