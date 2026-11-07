#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N];
string s=" ";
int t[N];
bool b[N];
bool op[N];
int mx=0LL;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		op[a[i]]=1;
		mx=max(mx,a[i]);
	}
	for(int i=1;i<=n;i++){
		s=" ";
		memset(b,0,sizeof b);
		for(int j=i;j<=n;j++){
			if(!b[a[j]]){
			b[i]=1;
			s+=char(a[j]+'0');
			}else{
				for(int k=1;k<=s.size();k++){
					if(s[k]==char(a[j]+'0')){
						s.erase(k,s.size()-k+1);
						break;
					}
				}
				s+=char(a[j]+'0');
			}

		}
		for(int j=1;j<=s.size();j++){
				t[int(s[j]-'0')]++;
		}
	}
	for(int i=1;i<=mx;i++){
		if(op[i]){
			cout<<t[i]<<" ";
		}
	}
	return 0;
}