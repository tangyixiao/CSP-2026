#include <bits/stdc++.h>
using namespace std;
int a[10005];
char c[10005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s; 
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}	
	}
	int cnt=0,sum=0;
	for(int i=1;i<=n;i++){
		if(s[i]!=s[s.size()+1-i]){
			cnt++;
		}
		else sum++;
	}
	if(cnt!=0){
		cout<<cnt;
	}
	else cout<<0;
	return 0;
}
