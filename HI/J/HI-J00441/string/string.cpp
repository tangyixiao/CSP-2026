#include<bits/stdc++.h>
using namespace std;
long long n,m,res,sum=1,pres;
string s,s1;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(long long i=1; i<=n; i++) {
		long long t;
		char c;
		cin>>t>>c;
		string ts;
		ts+=c;
		while(t>0) {
			s+=ts;
			t-=ts.size();
			if(ts.size()*2<=t) {
				ts+=ts;
			}
			if(ts.size()>t) {
				while(ts.size()>t) {
					ts=ts.substr(0,ts.size()/2);
				}
//			cout<<ts.size()<<endl<<s<<endl<<t<<endl;
			}
		}
//		while(t--){
//			s+=c;
//		}
	}
	long long l=s.size();
	for(long long i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			res++;
		}
	}
	cout<<res;
	return 0;
}


