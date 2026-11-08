#include<bits/stdc++.h>
using namespace std;
string s[200005];
int n,m;
int a[200005];
bool sf[200005];
int ans,ts=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int t=a[i],gs=0;
		string s1="";
		while(t){
			char t1=char(48+t%2);
			s1=t1+s1;
			gs++;
			t/=2;
		}
		for(int i=0;i<=30-gs;i++){
			s1='0'+s1;
		}
		s[i]=s1;
	}
	for(int i=1;i<=30;i++){
		ts=ts*2;
	}
	for(int i=0;i<=30;i++){
		vector<int> q;
		int gs=0;
		for(int j=1;j<=n;j++){
			if(s[j][i]=='1'){
				if(ans==0){
					gs++;
					q.push_back(j);
				}else if(sf[j]){
					gs++;
					q.push_back(j);
				}
			}
		}
		if(gs>=m){
			ans+=ts;
			memset(sf,0,sizeof(sf));
			for(auto asdf:q){
				sf[asdf]=1;
			}
		}
		ts/=2;
	}
	cout<<ans;
	return 0;
}
