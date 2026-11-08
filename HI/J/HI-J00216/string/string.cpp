#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string s="0";
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s=s+c;
		}
	}
	long long ans=0;
//	cout<<s.size();
	int q=s.size();
	for(int i=1;i<=q/2;i++){
		if(s[i]!=s[q-i]){
			ans++;
		//	cout<<ans<<" "<<q-i<<" ";
		}
	}
	cout<<ans;
	return 0;
}

