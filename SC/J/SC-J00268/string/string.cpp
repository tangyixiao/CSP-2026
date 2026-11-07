#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="",s1="",s2="";
	for(int i=1;i<=n;i++){
		int x;
		string a;
		cin>>x>>a;
		for(int j=1;j<=x;j++){
			s+=a;
		}
	}
	long long x=s.size();	
	s1=s.substr(0,x/2);
	s2=s.substr((x+1)/2);
	reverse(s2.begin(),s2.end());
	if(s1==s2){
		cout<<0;
		return 0;
	}
	long long cnt=0;
	for(int i=1;i<=x;i++){
		if(s1[i]!=s2[i]){
			cnt++;
		}
	}
	cout<<cnt;
		
		
	

	return 0;
}