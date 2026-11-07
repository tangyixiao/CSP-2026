#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
long long n,m,a[N];
string s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		char o;
		cin>>o;
		s+=o;
	}
	for(long long k=0;k<=n-1;k++){
		string s1="";
		for(long long i=k;i<s.size();i++){
			bool p=false;
			for(long long j=0;j<s1.size();j++){
				if(s[i]==s1[j]) p=true;
			}
			if(p) s1="";
			s1+=s[i];
		}
		for(long long i=0;i<s1.size();i++){
			a[s1[i]-'0']++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
