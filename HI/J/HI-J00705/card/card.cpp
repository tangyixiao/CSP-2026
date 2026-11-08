#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int S=3e5+100;
string s;
string b;
int c[S];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m; cin>>n>>m;
	cin>>s;
	for(int i=1;i<=m;i++){
		c[i]=0;
	}
	string as;
	for(int i=1;i<=n;i++){
		while(s.size()){
			int k=0;
			for(int j=0;j<b.size();j++){
				if(s[0]==b[j]){
					k=1;
					as=b.erase(j,b.size()-j);
					b+=s[0];
					break;
				}
			}
			if(k==0){
				b+=s[0];
			}
			s.erase(0,1);
		}
		for(int r=0;r<b.size();r++){
			for(int f=1;f<=m;f++){
				if(b[r]==f){
					c[f]++;break;
				}
			}
		}
		s+=as;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
