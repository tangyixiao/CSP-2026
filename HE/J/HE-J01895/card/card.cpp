#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N];
map<int, pair<int,int> >where;
map<int,int>cnt;
map<int,int>cnt1;
vector<int>use;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++) cnt[i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cnt[j]=0;
		while(!use.empty()) use.pop_back();
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]==0){
				where[a[j]].first=j;
				where[a[j]].second=use.size();
				use.push_back(a[j]);
				cnt[a[j]]++;
			}
			else{
				int start=where[a[j]].second;
				int end=use.size()-1;
				while(start<=end&&!use.empty()){
					cnt[use[end]]--;
					end--;
					use.pop_back();
				}
				use.push_back(a[j]);
				cnt[a[j]]++;
			}
		}
		for(int j=1;j<=m;j++){
			cnt1[j]+=cnt[j];
		} 
	}
	for(int i=1;i<=m;i++) cout<<cnt1[i]<<' '; 
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
