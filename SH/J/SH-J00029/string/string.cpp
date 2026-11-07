#include<bits/stdc++.h>
using namespace std;
long long a,n;
char c;
string s,s1,s2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	if(n==1){
		cin>>a>>c;
		cout<<0;
		return 0; 
	}

	while(n--){
		cin>>a>>c;
		s="";
		for(int i=0;i<a;i++){
			s+=c;
		}
		s1+=s;
		s2=s+s2;
	}
	long long cnt=0;
	for(int i=0;i<s1.size();i++){
		if(s2[i]!=s1[i]) cnt++;
	}
	if(cnt%2==0) cout<<cnt/2;
	else cout<<(cnt-1)/2;
	return 0;
}
