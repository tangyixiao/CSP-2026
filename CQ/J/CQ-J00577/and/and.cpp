#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	string s;
	int x=a[0];
	while(x!=0){
		int y=x%2+'0';
		s.push_back(y);
		x/=2;
	}
	for(int i=1;i<m;i++){
		int x=a[i];
		string s1;
		while(x!=0){
			int y=x%2+'0';
			s1.push_back(y);
			x/=2;
		}
		int e=max(s.size(),s1.size());
		for(int j=0;j<e;j++){
			if(s[j]=='1'&&s1[j]=='1'){
				s[j]='1';
			}
			else{
				s[j]='0';
			}
		}
	}
	long long ans=0;
	long long q=1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			ans+=q;
		}
		q*=2;
	}
	cout<<ans<<endl;
	return 0;
}
