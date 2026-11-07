#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int num;
		string t;
		cin>>num>>t;
		for(int j=1;j<=num;j++){
			s+=t;
		}
	}
	int len=(s.length()+1)/2;
	if(s.length()%2==1){
		for(int i=0;i<len;i++){
			if(s[i]!=s[s.length()-1-i]){
				cnt++;
			}
		}
	}else{
		for(int i=0;i<=len;i++){
			if(s[i]!=s[s.length()-1-i]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
