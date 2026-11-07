#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
string s;



int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long nm;char c;
		cin>>nm>>c;
		
		for(long long j=1;j<=nm;j++)s+=c;
	}
	long long m=s.size();
	
	if(m%2==0){
		for(long long i=0;i<m/2;i++){
			long long j=m-1-i;
			if(s[i]!=s[j])cnt++;
		}
	}
	else{
		for(long long i=0;i<m/2;i++){
			long long j=m-1-i;
			if(s[i]!=s[j])cnt++;
		}
	}
	cout<<cnt;
	
	return 0;
}
