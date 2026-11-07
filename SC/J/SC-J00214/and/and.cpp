#include <bits/stdc++.h>
const int N=2e5+5;
using namespace std;
int n,m,a[N],js[35],p,ans;
vector <int> vt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)  cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int k=1;k<=33;k++){
			if((a[i]>>(k-1)&1)!=0)  js[k]++;
		}
	}
	for(int k=32;k>=1;k--){
		if(js[k]>=m){
			p=k;  ans+=(1<<(k-1));
			break;
		}
	}
	vt.push_back(p);
	p--;
    while(p){
		int js=0;
		for(int i=1;i<=n;i++){
			int pd=1;
			for(auto x:vt){
				if((a[i]>>(x-1)&1)==0)  {pd=0;  break;}
			}
			if((a[i]>>(p-1)&1)!=0&&pd==1)  js++;
		}
		if(js>=m)  {vt.push_back(p);ans+=(1<<(p-1));}
		p--;
	}
	cout<<ans;
	return 0;
}