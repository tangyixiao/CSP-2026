#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	string s="",p="";
	long long sum=0;
	for(long long i=0;i<n;i++){
		long long c;string a;
		cin>>c>>a;
		sum+=c;
		for(long long i=0;i<c;i++){
			s+=a;
			p+=a;
		}
	}
	if(sum%2!=0) sum=sum/2+1;
	else sum/=2;
	reverse(p.begin(),p.end());
	long long u=sum;
	for(long long i=0;i<u;i++){
		if(s[i]==p[i]) sum--;
	}
	cout<<sum;
	
	return 0;
}
