#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen(".out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin>>n;
	long long p; 
	vector<char> a(n);
	vector<char> v(n);
	for(int i=0;i<n*2;i++){
		cin>>a[i];		
	}
	long long u=0;
	for(int i=0;i<n*2;i++){
		u=u+a[i];
		i++;
	}
	

	for(int i=0;i<n;i++){
		for(long long o=0;o<u;o++){
			v[o]=a[i];
			i++;
		}
	}
	for(int i=0;i<u;i++){
		if(v[i]!=v[u-1]){
			p++;
		}
		u--;	
	}
	cout<<p;
	return 0;
}

