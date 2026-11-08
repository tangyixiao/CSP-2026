#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long a,b;
	cin>>a>>b;
	long long  maxx=-10000,mp;
	multiset<long long>n;
	for(int i=0;i<a;i++){
		int x;
		cin>>x;
		n.insert(x);
	}
	string s;
	int i=0;
	for(int y:n){
		i++;
		if(i==a-b+1)cout<<y;
	}
	return 0;
}
