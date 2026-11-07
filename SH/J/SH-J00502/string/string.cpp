#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int ans=0,n,a;
	string s,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		for(int i=1;i<=a;i++){
		s.insert(0,c);
	 }
	}
	for(int i=0;i<s.size()/2;i++){
		if(s.substr(i,1)!=s.substr(s.size()-i-1,1)){
		ans++;
	}
	}
	cout<<ans;
	return 0;
}
