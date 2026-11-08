#include<bits/stdc++.h>
using namespace std;
string g(long long n){
	string s;
	while(n>=1){
		long long a=n%2;
		s+=(a+'0'),n/=2;
	}for(int i=s.size();i<32;i++){
		s+='0';
	}
	return s;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n , m, o=INT_MAX, w=0;
	cin >>n>> m;
	vector<bool> f(n);
	vector<string> v(n);
	vector<long long> h(n);
	for(int i=0;i<n;i++){
		long long a;
		cin >>a;
		h[i]=a;
	}for(int i=0;i<n;i++){
		v[i]=g(h[i]);
	}
	for(int i=32;i>=0;i--){
		long long l=0;
		long long p=0;
		for(int j=0;j<n;j++){
			if(v[j][i]=='1'&&f[j]==0){
				l++;
			}
		}if(l>=m){
			p=1;
			for(int j=0;j<n;j++){
				if(v[j][i]=='1'&&f[j]==0){
				}else{
					f[j]=1;
				}
			}
		}w*=2;
		w+=p;
	}cout << w;
	return 0;
}
