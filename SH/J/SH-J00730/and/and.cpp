#include<bits/stdc++.h>
using namespace std;
priority_queue<long long> p;
int main(){
	long long m,n,a;
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a;
		p.push(a);
	}
	a=p.top();
	p.pop();
	for(long long i=1;i<m;i++){
		a&=p.top();
		p.pop();
	}
	cout<<a;
	return 0;
}
