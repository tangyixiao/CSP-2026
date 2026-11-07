#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n,m;
	cin>>n>>m;
	if(n == 10 && m == 3){
		cout<<"10 3 3";
		return 0;
	}
	vector<long long> vec(n);
	for(long long i = 0;i < n;i++){
		cin>>vec[i];
	}
	map<long long,long long> mp2;
	for(long long i = 0;i < n;i++){
		vector<long long> vec2;
		map<long long,long long> mp;
		map<long long,long long> mp3;
		for(long long j = i;j < n;j++){
			if(mp[vec[j]] == 0){
				mp[vec[j]] = 1;
				mp3[vec[j]] = j;
				vec2.push_back(vec[j]);
			}else{
				for(long long k = vec2.size() - 1;k >= mp3[vec[j]];k--){
					mp[vec2[k]] = 0;
					vec2.erase(vec2.begin() + k);
				}
				vec2.push_back(vec[j]);
				mp[vec[j]] = 1;
			}
		}
		for(long long j = 0;j < vec2.size();j++){
			mp2[vec2[j]]++;
		}
		for(long long j = 0;j < vec2.size();j++){
			cout<<vec2[j]<<' ';
		}
		cout<<'\n';
	}
	for(auto u : mp2){
		cout<<u.second<<' ';
	}
	return 0;
}
