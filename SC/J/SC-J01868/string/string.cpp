#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long tot=-1;
	cin>>n;
	vector<char> s;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=1;i<=a;i++) s.push_back(c),tot++;
	}
	long long mid=(tot+1)/2,ans=0;
	for(int i=0;i<mid;i++){
		char s1,s2;
		s1=s[i];
		s2=s[tot-i];
		if(s1!=s2) ans++;
	}
	cout<<ans;
	return 0;
}