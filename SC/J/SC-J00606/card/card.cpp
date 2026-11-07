#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
int a[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int cnt[m]={0};
	int is[m]={0};
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		vector<int> t;
		for(int j=i;j<n;j++){
			t.push_back(a[j]);
			//cout<<"vector<int> t:";
			//for(int x=0;x<t.size();x++) cout<<t[x]<<" ";
			//cout<<'\n';
			for(int w=0;w<t.size();w++){
				if(t[w]==a[j]){
					for(int l=w;l<j;l++) t[l]=0;
					break;
				}
			}
		}
		for(int j=0;j<t.size();j++){
			if(t[j]!=0) is[t[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(is[j]!=0) cnt[j]++; 
		}
		memset(is,0,sizeof is);
	}
	for(int i=0;i<m;i++) cout<<cnt[i]<<" ";
	return 0;
}