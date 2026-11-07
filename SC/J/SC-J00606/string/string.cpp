#include<bits/stdc++.h>
using namespace std;
string s;
int cnt=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		char c;
		cin>>c;
		while(k--){
			s+=c;
		}
	}
	//cout<<s;
	string str=s;
	reverse(s.begin(),s.end());
	int m=s.size()/2,len=s.size();
	for(int i=m;i<len;i++){
		if(s[i]!=str[i]) cnt++;
	}
	cout<<cnt;
	return 0;
}
