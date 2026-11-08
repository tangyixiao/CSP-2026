#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b,k=0;
	string s="";
	string x;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>x;
		for(long long j=0;j<b;j++){
			s=s+x;
		}
	}long long m=s.size();
	long long n=m/2;
	for(int i=0;i<n;i++){
		if(s[i]!=s[m-1-i]){
			k++;
		}
	}cout<<k<<endl;
	return 0;
}
