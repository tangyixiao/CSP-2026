#include<bits/stdc++.h>
using namespace std;
const int N=1e5*5+10;
unsigned long long n,m,a[N],b[N];
stack<unsigned long long> q;

int main() {
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(unsigned long long i=1;i<=n;i++)
		cin>>a[i];
	for(unsigned long long i=1;i<=n;i++){
		q.push(a[i]);
		for(unsigned long long j=1;j<i;j++){
			if(a[j]==a[i]){
				while(!q.empty())q.pop();
				for(unsigned long long x=j;x<=n;x++)q.push(a[j]);
			}
		}
		for(unsigned long long j=1;j<=q.size();j++){
			if(q.top()==j){
				b[q.top()]++;
				q.pop();
			}
		}
	}
	for(unsigned long long i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

