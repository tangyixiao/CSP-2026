#include<bits/stdc++.h>
using namespace std;
int n,m;
char c;
long long h;
vector<char> v;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for(int i=1;i<=n;i++){
		cin>>m>>c;
		while(m--){
			v.push_back(c);
		}
	}
	long long si=v.size();
	for(long long i=0;i<si/2;i++){
		if(v[i]!=v[si-1-i]) h++;
	}
	cout<<h<<'\n';
	return 0;
}
