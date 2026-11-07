#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n,l,r,ans=0,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		char c;
		cin>>m>>c;
		for(int j=0;j<m;j++) s+=c;
		cnt+=m;
	}
	if(cnt%2==0){
		l=cnt/2-1;
		r=cnt/2;
		if(s[l]!=s[r]) ans++;
	}
	else{
		l=cnt/2;
		r=cnt/2;
	}
	while(l>=0 || r<cnt){
		l-=1,r+=1;
		if(s[l]!=s[r]) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
