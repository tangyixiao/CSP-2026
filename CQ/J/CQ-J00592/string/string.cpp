#include<bits/stdc++.h>
using namespace std;
int n;
unsigned long long cnt,p,ans;
unsigned long long a[200005];
bool ou;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	s+="0";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		long long sin;
		string ss;
		cin>>sin>>ss;
		for(int j=1;j<=sin;j++){
			s+=ss;
		}
		cnt+=sin;
	}
	if(cnt%2==1) ou=1;
	if(ou==1){
		p = cnt/2+1;
	}
	else{
		p= cnt/2;
	}
	
	for(int i=1;i<=p;i++){
		if(s[i]!=s[cnt-i+1])ans++;
	}
	
	cout<<ans;
	return 0;
}
