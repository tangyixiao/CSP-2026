#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+50;
int n,m;

long long a[MAXN];
long long countnum[MAXN];
long long lastnum[MAXN];

long long ans[MAXN];

void readset(){
	freopen("card.out","w",stdout);
	freopen("card.in","r",stdin);
}

void pre_readset(){
	freopen("card3.in","r",stdin);
}

void read(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		countnum[a[i]]++;
		lastnum[a[i]]=i;
	}
	
	/*for(int i=1;i<=m;i++){
		cout<<countnum[i]<<' '<<lastnum[i]<<'\n';
	}*/
}

void solve(){
	
	for(long long i=1;i<=m;i++){//i是数字 
		int Start=lastnum[i];
		set<long long>fri;
		vector<long long>fris;
		for(int j=Start;j>1;j--){//j是数字指 
			if(lastnum[a[j]]>Start)break;
			if(fri.find(a[j])==fri.end()){
				fri.insert(a[j]);
				fris.push_back(a[j]);
			}
		}
		
		long long vn=fris.size();
		for(long long j=0;j<vn;j++){
			ans[i]+=countnum[fris[j]];
		}
	} 
}

int main(){
	readset();
	//pre_readset();
	read();solve();
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}


//有错