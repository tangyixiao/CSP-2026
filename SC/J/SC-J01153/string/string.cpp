#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s,sd[100005];
	int n,q[100005],ans,big=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>q[i]>>sd[i];
	}
	for (int i=1;i<=n;i++){
		for(int j=1;j<=q[i];j++){
			s+=sd[i];
		}
	}
	int g=s.size();
	for (int i=1;i<=g/2;i++){
		for(int j=g;j>=g/2+1;j--){
			if(s.substr(i,i)==s.substr(j,j)) ans++;
		}
	}
	if(ans==g/2) {cout<<"0";return 0;}
	for(int i=1;i<=n;i++){
		big=max(big,q[i]);
	}
	if(g%2==1) cout<<g-big-1;
	else cout<<g-big;
	return 0;
}