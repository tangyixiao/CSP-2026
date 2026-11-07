#include<bits/stdc++.h>
using namespace std;
string s="",l="",r="";
long long n,len,sum,x;
char y;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>x>>y;
		for(long long j=1;j<=x;j++){
			s+=y;
		}
	}
	len=s.size();
	for(long long i=0;i<len;i++){
		if(s[i]!=s[len-i-1]){
		sum++;	
		}
	}
	cout<<sum/2;
	return 0;
}
