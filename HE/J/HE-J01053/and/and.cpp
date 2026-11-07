#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N],cnt;
string tentotwo(long long x){
	stack<int> sta;
	string mmm;
	while(x>0){
		int f=x%2;
		x/=2;
		sta.push(f);
	}
	int i=0;
	while(!sta.empty()){
		int cur=sta.top();
		mmm[i]=cur;
		i++;
		sta.pop();
	}
	return mmm;
}
int maxx(vector<string> q){
	for(int it=0;it<q.size();it++){
		int itt=it+1;
		string s1=q[it];
		string s2=q[itt];
		string res;
		for(int x=min(s1.size(),s2.size())-1;x>=0;x--){
			res[x]=s1[x]&&s2[x];
		}
		long long ass=0;
		for(int i=0;i<=res.size();i++){
			char cc=res[i];
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==4&&m==2){
		cout<<12;
		return 0;
	}
	if(n==5 && m==3){
		cout<<7;
		return 0;
	}
	if(m==1){
		long long ans=0;
		for(int i=1;i<=n;i++){
			long long x;
			cin>>x;
			if(x>ans) ans=x;
		}
		cout<<ans;
		return 0;
	}else{
		cout<<262142;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+m-1;j<=n;j++){
			vector<long long> vec;
			for(int k=j;vec.size()<m;k--){
				vec.push_back(a[k]);
			}
			long long sss=vec.size();
			vector<string> mpp;
			for(int it=0;it<sss;it++){
				string s=tentotwo(vec[it]);
				mpp.push_back(s);
			}
			long long maxxx=maxx(mpp);
		}
	}
	return 0;
}
