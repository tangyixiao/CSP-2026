#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<char> v;
char a[N],b; 
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;
	long long tt=0;
	char b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m>>b;
		for(int i=0;i<m;i++){
			v.push_back(b);
		}
	}
	long long l=0,r=v.size()-1;
	while(l<r){
		if(v[l]!=v[r]){
			ans++;
		}
		l++,r--;
	}
	cout<<ans;
	return 0;
}