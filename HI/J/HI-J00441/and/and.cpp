#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long res;
vector<long long> v;
vector<string> s;

cmp1(string x,string y) {
	return x>y;
}

cmp2(long long x,long long y) {
	return x>y;
}

string aand(string x,string y) {
	string r=x;
	for(int i=0; i<x.size(); i++) {
		if(x[i]=='1'&&y[i]=='1') {
			r[i]='1';
		} else {
			r[i]='0';
		}
	}
	return r;
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(long long i=1; i<=n; i++) {
		long long t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),cmp2);
	if(m==1) {
		cout<<v[0];
	} else if(m==2) {
		for(long long i=0; i<n; i++) {
			for(long long j=0; j<n; j++) {
				if(i==j) {
					continue;
				}
				long long t=v[i];
				t&=v[j];
				res=max(res,t);
			}
		}
		cout<<res;
	} else {
		for(auto i:v) {
			bitset<32> b(i);
			s.push_back(b.to_string());
		}
		sort(s.begin(),s.end(),cmp1);
		long long cnt;
		while(res==0) {
			string r=s[cnt];
			for(long long p=cnt; p<m+cnt; p++) {
				r=aand(r,s[p]);
			}
			res=max(res,stoll(r,nullptr,2));
			cnt++;
		}
		cout<<res;
	}
	return 0;
}

