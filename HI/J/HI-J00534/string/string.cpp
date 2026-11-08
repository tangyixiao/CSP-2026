#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	queue<char> q;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		char y;cin>>y;
		while(x--){
			q.push(y);
		}
	}
	long long l=q.size();
	char a[l];
	for(int i=0;i<l;i++){
		a[i]=q.front();
		q.pop();
	}
	//for(int i=0;i<l;i++) cout<<a[i];
	int u=0;
	int r=l-1;
	int cut=0;
	while(u<r){
		if(a[u]!=a[r]){
			cut++;
		}
		u++;
		r--;
	}
	cout<<cut;
	return 0;
}
