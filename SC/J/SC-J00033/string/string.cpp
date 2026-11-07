#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int nn,x,n=0,ans=0;
	char c;
	string s,l,r;
	cin>>nn;
	for(int i=1;i<=nn;i++){
		cin>>x>>c;
		n+=x;
		while(x--){
			s=s+c;
		}
	}
	l=s.substr(0,n/2);
	r=s.substr((n+1)/2);
//	cout<<l<<'\n'<<r<<'\n';
	for(int i=0;i<l.size();i++){
		if(l[i]!=r[r.size()-i-1]){
			ans++;
//			cout<<i<<" "<<r.size()-i<<'\n';
		}
	}
	printf("%d",ans);
	return 0; 
}
/*
5
1 a
2 b
1 a
2 b
1 c
*/