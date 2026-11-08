#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string q;
	for(int i=1; i<=n; i++){
		int a;
		char b;
		cin>>a>>b;
		
		for(int i=1; i<=a; i++){
			q+=b;
		}
	}
	long long w=q.size()/2;
	
	long long c=0;
	string qq;
	for(long long i=q.size()-1; i>=q.size()-w; i--){
		qq+=q[i];
	}
	for(long long i=0; i<w; i++){
		if(q[i]!=qq[i])c++;
	}
	cout<<c;
	
	
	
	return 0;
}
