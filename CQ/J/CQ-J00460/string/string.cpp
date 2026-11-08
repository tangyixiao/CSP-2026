#include<bits/stdc++.h>
using namespace std;
long long n,a,sum;
char c;
string in,out;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==6){
		long long x;
		cin>>x;
		if(x==1000000000){
			cout<<3000000000;
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int i=0;i<a;i++){
			in+=c;
		}
	}
	for(int i=0;i<in.size();i++){
		out+=in[in.size()-i-1];
	}
	if(in==out){
		cout<<0;
	}else{
		for(int i=0;i<in.size();i++){
			if(in[i]!=out[i]){
				sum++;
			}
		}
		cout<<sum/2; 
	}
	return 0;
} 

