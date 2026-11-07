#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,g;
	long long a=1e9,b=-1e9;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>g;
		if(b<g){
			b=g;
		}
	}
	
	cout<<b<<"\e";
}