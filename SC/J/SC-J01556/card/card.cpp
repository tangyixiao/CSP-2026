#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+10,M=3e5+10;
int n,m;
string q[N],a;
bool f[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	cin>>a;
	for(int i=1;i<=n;i++){
		memset(f,0,sizeof(f));
		string s;
		s=' '+s;
		for(int j=i;j<=n;j++){
			if(!f[a[j]-'0']){
				s+=a[j];
				f[a[j]-'0']=1;
			}else{
				string s1;
				for(int p=1;p<=j;p++){
					s1+=s[p];
					if(s[p]==a[j]) break;
				}
				s=s1;
				memset(f,0,sizeof(f));
				for(int o=1;o<=s.size();o++){
					f[a[o]-'0']=1;
				}
			}
		}
		for(int k=1;k<=s.size();k++){
			q[s[k]-'0']+=(i+'0');
		}
	}
	for(int i=1;i<=m;i++){
		cout<<q[i].size()<<' ';
	}
	return 0;
}