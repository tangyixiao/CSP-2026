#include<bits/stdc++.h>
using namespace std;
int li[200005];
string ss[200005],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>li[i]>>ss[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=li[i];j++){
			s+=ss[i];
		}
	}
	int l=0,cnt=0;
	while(l<s.size()/2){
		if(s[l]!=s[s.size()-1-l]){
			cnt++;
		}
		l++;
	}
	cout<<cnt;
	return 0;
} 