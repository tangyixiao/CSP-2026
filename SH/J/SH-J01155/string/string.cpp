#include<bits/stdc++.h>
using namespace std;
const int N=10009;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n=0;
	long long ans=0;
	string s;
	cin>>n;
	long long a=0,e=0;
	long long cnt=0;
	for(long long i=0;i<n;i++){
		long long n;
		char k;
		cin>>n;
		cin>>k;
		e+=n;
		for(int j=a;j<e;j++){
			s[j]=k;
		}
		a=e;
	}
	for(int i=0;i<e;i++){
		s[i]==s[i+1];
		cout<<0;
		return 0;
	}
	if(e%2==1){
		for(long long i=0,j=e;i!=e/2 && j!=e/2;i++,j--){
			if(s[i]!=s[j]){
				ans+=1;
			}
		}
		cout<<ans;
		return 0;
	}else{
		for(long long i=0,j=e;i!=e/2 && j!=e/2;i++,j--){
			if(s[i]!=s[j]){
				ans+=1;
			}
		}
		cout<<ans;
		return 0;
	}
	
	
	
	
	
}
