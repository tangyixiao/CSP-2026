#include<bits/stdc++.h>
#define int long long
#define f first
#define s second
using namespace std;
int n,ans;
vector<pair<int,char> > v;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	v.push_back({114514,'!'});
	for(int i=1;i<=n;i++){
		int x;char y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	for(int i=1,j=n;i<j;){
		if(v[i].s==v[j].s){
			if(v[i].f<v[j].f){
				v[j].f-=v[i].f;
				i++;
			}
			else if(v[i].f>v[j].f){
				v[i].f-=v[j].f;
				j--;
			}		
			else{
				i++,j--;
			}
		}
		else{
			ans+=min(v[i].f,v[j].f);
			if(v[i].f<v[j].f){
				v[j].f-=v[i].f;
				i++;
			}
			else if(v[i].f>v[j].f){
				v[i].f-=v[j].f;
				j--;
			}		
			else{
				i++,j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
