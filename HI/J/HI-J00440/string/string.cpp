#include<bits/stdc++.h>
using namespace std;
long long n,m,len=0,sum=0;
string s;
string k;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		char h;
		cin>>h;
		for(int i=1;i<=m;i++){
			s+=h;
		}
	}

	len=s.size();
	
	for(int i=0;i<len;i++){
		k+=s[len-i-1];
	}
	
	
	for(int i=0;i<len/2;i++){
		if(s[i]!=k[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
