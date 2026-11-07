#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a;char c;string s1,s2;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	memset(s1,0x3f3f3f3f3f3f3f3f,sizeof s1);
	cin>>n;
	while(n--){
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s1+=c;
		}
	}int cnt=0;
	for(int i=s1.size()-1;i>=0;i--){
		s2[cnt]=s1[i];
		cnt++;
	}
	int count=0;
	for(int i=0;i<=s1.size()/2-1;i++){
		if(s1[i]==s2[s1.size()/2-1-i])count++;
	}cout<<s1.size()/2-count;
	return 0;
}

