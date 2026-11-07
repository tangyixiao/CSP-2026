#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<char> v;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		int x,y;
		char a,b;
		cin>>x>>a>>y>>b;
		if(a==b){
			cout<<0;
			return 0;
		}
		if((x+y)%2==0){
			if(x==y){
				cout<<0;
				return 0;
			}
			cout<<min(x,y);
			return 0;
		}
		cout<<min(x,y);
		return 0;
	}
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			v.push_back(c);
		}
	}
	return 0;
}

