#include<bits/stdc++.h>
using namespace std;
long long n,a;
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long c,sum=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>c>>s1;
		for(int j=1;j<=c;j++){
			s+=s1;
		}
	}
	a=s.size();
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[a-i-1]){
			s[a-i-1]=s[i];
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
