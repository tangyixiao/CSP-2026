#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	string S=" ";
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		while(a--) S+=c;
	}
	int s=S.size()-1;
	int l=1,r=s,ans=0;
	while(l<r){
		if(S[l]!=S[r]) ans++;
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}
