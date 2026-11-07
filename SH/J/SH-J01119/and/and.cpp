#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int flag=0;
	int a[200005];
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt=max(cnt,a[i]);
		if(a[i]>=4){
			flag=1;
		}
	}
	if(m==1){
		cout<<cnt;
		return 0;
	}
	if(flag==0){
		cout<<1;
		return 0;
	}
	else{
		cout<<cnt;
		return 0;
	}
	/*long long b[200005];
	string s;
	long long t[200005];
	for(int i=1;i<=n;i++){
		s="0";
		while(c[i]!=1){
			s=s+char(c[i]%2);
			c[i]%=2;
			
		}
		s=s+'1';
		for(int j=1;j<=s.size();j++){
			b[i]+=(s[i]-'0')*ch(j-1);
			t[i]=s.size();
		}
	} 
	for(int i=1;i<=n;i++){
		for(int i=1;i<=n;i++){
			cnt=-0987
		}
	}
	*/
	return 0;
} 
