#include<bits/stdc++.h>
using namespace std;
deque<long long> d;
map<long long,bool> mp;
bool have[500001]={true};
long long backet[500001]={0};
int main(){
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long m,n,a,locate=0;
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a;
		d.push_back(a);
	}
	while(d.size()>0){
		for(long long i=0;i<d.size()-1;i++){
			if(!mp[d[i]]) mp[d[i]]=true;
			else{
				mp[d[i]]=false;
				locate=i;
			}
		}
		for(long long i=locate;i<n;i++){
			if(have[d[i]]) backet[d[i]]++;
			have[d[i]]=false;
		}
		bool have[500001]={true};
		mp.clear();
		d.pop_front();
	}
	for(long long i=0;i<m;i++) cout<<backet[i]<<" ";
	return 0;
}
