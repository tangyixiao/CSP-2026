#include<bits/stdc++.h>
using namespace std;
long long n,cnt,g;
struct str{
	long long a;
	char s;
}v[20005];
vector<str> le;
vector<str> ri;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i].a>>v[i].s;
	}
	for(int i=1,j=n;i<=j;i++,j--){
		if(i!=j){
			if(v[i].a>v[j].a){
				le.push_back({v[i].a-v[j].a,v[i].s});
				if(v[i].s!=v[j].s) g+=v[j].a;
			}else if(v[i].a<v[j].a){ 
				ri.push_back({v[j].a-v[i].a,v[i].s});
				if(v[i].s!=v[j].s) g+=v[i].a;
			}else{
				if(v[i].s!=v[j].s) g+=v[i].a;
			}
		}else{
			long long ln=0,rn=0,tn=v[i].a,tm;
			for(int i=0;i<le.size();i++){
				ln+=le[i].a;
			}
			for(int i=0;i<ri.size();i++){
				rn+=ri[i].a;
			}
			tm=tn+ln+rn;
			tm/=2;
			le.push_back({tm-ln,v[i].s});
			ri.push_back({tm-rn,v[i].s});
		}
		while(!le.empty()&&!ri.empty()){
				str x=le.front(),y=ri.front();
				if(x.a>y.a){
					if(x.s==y.s){
						ri.pop_back();
						le[0]={x.a-y.a,x.s};
					}else{
						ri.pop_back();
						le[0]={x.a-y.a,x.s};
						g+=y.a;
					}
				}else if(x.a<y.a){
					if(x.s==y.s){
						le.pop_back();
						ri[0]={y.a-x.a,y.s};
					}else{
						le.pop_back();
						ri[0]={y.a-x.a,y.s};
						g+=x.a;
					}
				}else{
					if(x.s==y.s){
						le.pop_back();
						ri.pop_back();
					}else{
						g+=x.a;
						le.pop_back();
						ri.pop_back();
					}
				}
		}		 
	}
	cout<<g;
	return 0;
} 