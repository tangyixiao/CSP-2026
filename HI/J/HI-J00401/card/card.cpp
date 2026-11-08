#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> s;
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		int q;
		cin>>q;
		s.push_back(q);		
		mp[q]=0;
	}
	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=i;j<n;j++){
			int w=s[j];
			int ans=0;
			for(int t=0;t<v.size();t++){
				if(v[t]==w){
					v.erase(v.begin()+t,v.begin()+v.size());
				}
			}
			v.push_back(w);
		}
		for(auto q:mp){	
			if(find(v.begin(),v.end(),q.first)!=v.end()){
				mp[q.first]++;
			}	
		}
	}
	for(auto q:mp){
		cout<<q.second<<" "; 
	}
	return 0;
}
