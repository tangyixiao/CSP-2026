#include<bits/stdc++.h>
using namespace std;

bool hw(string s){
	string s1;
	int l=s.size();
	while(l>0){
		s1+=s[l-1];
		l--;
	}
	if(s1==s) return 1;
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	
	string s;
	int n,a[200005],ant=0;
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
	}
	if(hw(s)){
		cout<<0;
		return 0;
	}
	
	return 0;
}