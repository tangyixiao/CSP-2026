#include<bits/stdc++.h>
using namespace std;
string s="";
int n;
void solve(){
	cin>>n;
	for(int q=1;q<=n;q++){
		int x;
		char c;
		cin>>x>>c;
		for(int w=0;w<x;w++){
			s+=c;
		}
	}
	string temp=s;
	reverse(temp.begin(),temp.end());
	if(temp==s){
		cout<<0;
		return;
	}
	int i=0,j=s.size()-1;
	long long ans=0;
	while(i<=j){
		if(s[i]!=s[j]){
			ans++;
		}
		i++;
		j--;
	}
	cout<<ans;
	return;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
	return 0;
}
