#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],c[200010],ans,t=1;
string s[200010];
bool cmp(int x,int y){
	if(x>=y) return true;
	else return false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++){
		string s1;
		while(a[i]){
			s[i]+=char(a[i]%2+'0');
			a[i]=a[i]/2;
		}
	}
	for(int i=2;i<=m;i++){
		for(int j=0;j<max(s[i].size(),s[i-1].size());j++){
			if(s[i][j]!=s[i-1][j]) s[i][j]='0';
		}
	}
	cout<<s[m];
	for(int i=0;i<=s[m].size();i++){
		if(s[m][i]=='1') ans+=t;
		t*=2;
	}
	cout<<" "<<ans;
	return 0;
}