#include<bits/stdc++.h>
using namespace std;
long long n,m,a,ans,now=(1<<29),cnt;
string s[200001];
bool atu[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		while(a){
			s[i]=(char)(a%2+48)+s[i];
			a/=2;
		}
		while(s[i].length()<30)
			s[i]='0'+s[i];
	}
	for(int i=1;i<=n;i++)
		atu[i]=1; 
	for(int i=0;i<30;i++){
		cnt=0;
		for(int j=1;j<=n;j++)
			cnt+=(atu[j]&&s[j][i]=='1');
		if(cnt>=m){
			ans+=now;
			for(int j=1;j<=n;j++)
				if(s[j][i]=='0')
					atu[j]=0;
		}
		now/=2;
	}
	cout<<ans;
	return 0;
}
