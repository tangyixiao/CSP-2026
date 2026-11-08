#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a,jw=1,sum;
bool t[200005],b[200005][35];
string p;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a);
		string s;
		while(a){
			s+=(char)(a%2+'0');
			a/=2;
		}
		int len=s.size();
		for(int j=len-1;j>=0;j--){
			b[i][31-j]=(s[j]-'0');
		}
	}
	for(int i=1;i<=31;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]&&!t[j]){
				cnt++;
			}
		}
		if(cnt<m){
			p+='0';
		}else{
			p+='1';
			for(int j=1;j<=n;j++){
				if(!b[j][i]){
					t[j]=1;
				}
			}
		}
	}
	int len1=p.size();
	for(int i=p.size()-1;i>=0;i--){
		sum+=(p[i]-'0')*jw;
		jw*=2;
	}
	printf("%lld",sum);
	return 0;
}
