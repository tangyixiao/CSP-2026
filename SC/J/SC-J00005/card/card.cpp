#include<bits/stdc++.h>
#define endline cout<<"\n"
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],app[M],cur[N],ind[M];
bool flag[M];
deque<int> vec;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	cin>>n>>m;
	memset(ind,-1,sizeof(ind));
	memset(cur,-1,sizeof(cur));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(app[a[i]]==0){
			app[a[i]]=i;
		}else{
			cur[i]=app[a[i]];
			for(int j=i+1;j<app[a[i]];j++){
				if(app[a[j]]==j) app[a[j]]=0;
			}
		}
	}memset(app,0,sizeof(app));
	vec.push_back(a[n]);
	int flag=0;
	for(int i=n-1;i>=1;i--){
		if(cur[i]==-1){
			vec.push_back(a[i]);
			ind[a[i]]=vec.size()-1;
//			cerr<<11<<"\n";
		}else if(a[i]==a[i+1]){
			app[a[i]]++;
		}else{
//			cout<<121<<"\n\n";
			int t=ind[a[i]],len=vec.size()-flag;
//			cout<<t<<"\n\n\n";
			for(int j=0;j<=flag;j++){
				app[vec[j]]+=len;
			}for(int j=flag+1;j<vec.size();j++){
				app[vec[j]]+=len-(j-flag);
			}flag=t;
			int fnc=vec.size()-t-1; 
			while(fnc>0) fnc--,vec.pop_back();
//			cout<<vec.size()<<"\n\n\n";
		}
	}int len=vec.size()-flag;
	for(int j=0;j<=flag;j++){
		app[vec[j]]+=len;
	}for(int j=flag+1;j<vec.size();j++){
		app[vec[j]]+=len-(j-flag);
	}for(int i=1;i<=m;i++) cout<<app[i]<<" ";
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/