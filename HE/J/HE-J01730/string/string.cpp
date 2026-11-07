#include<bits/stdc++.h>
using namespace std;
#define int long long
int l;
int a;
string b;
string p;
int sum;
string m;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>l;
	for(int i=0;i<l;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			p+=b;
		}
	}
	int w=p.size();
	for(int i=w-1;i>=0;i--){
		if(p[i]!=p[w-1-i]){
			sum++;
		}
	}
	
	cout<<sum/2;
	
	
	
	return 0;
}
