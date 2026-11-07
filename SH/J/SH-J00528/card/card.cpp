#include<bits/stdc++.h>
#include<vector>
using namespace std;
int card[200006];
vector<int>desk;
int n,m;
int cnt[200006];
void update(vector<int>v,size_t len){
	for(size_t i=0;i<len;++i){
		if(v[i]<200000)++cnt[v[i]];
	}
}
size_t find(vector<int>v,size_t len,int nu){
	for(size_t i=0;i<len;++i){
		if(v[i]==nu)return i;
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>card[i];
	}
	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			size_t idx=find(desk,desk.size(),card[j]);
			if(idx!=(size_t)-1){
				while(desk.size()>idx){
					desk.pop_back();
				}
			}
			desk.push_back(card[j]);/*
				cout<<"\ngame "<<i+1<<":";
				for(int i=0;i<desk.size();++i)cout<<desk[i]<<' ';
				cout<<"\n";*/
		}
		update(desk,desk.size());
		desk.clear();
	}
	for(int i=1;i<=m;++i){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
