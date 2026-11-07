#include<bits/stdc++.h>
using namespace std;

const int N=3e5+5;
int n,m;
int cnt,ans;
deque<int> a;
int am[N];

int fd(deque<int> q,int x){
	int temp=0;
	for(int i=0;i<q.size();i++){
		if(q[i]==x){
			temp++;
			if(temp==2){
				return i;
			}
		}
	}
	return -1;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	cin>>n>>m;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		a.push_back(t);
	}
	for(int op=0;op<n;op++){
		deque<int> v;
		int s=a.size();
		map<int,int> mp;
		for(int i=0;i<s;i++){
			if(mp[a[i]]==0){
				mp[a[i]]++;
				v.push_back(a[i]);
			}else{
				v.erase(v.begin(),v.end());
				v.push_back(a[i]);
			}
		}
		for(int i=0;i<v.size();i++){
			am[v[i]]++;
		}
		a.pop_front();
	}
	for(int i=1;i<=m;i++){
		cout<<am[i]<<' ';
	}
	
	return 0;
}