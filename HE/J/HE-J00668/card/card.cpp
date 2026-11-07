#include<bits/stdc++.h>
using namespace std;
long long a[500005];
map<int,int> mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		string s;
		for(int j=i;j<=n;j++){
			if(s.find(a[j])==-1)
				s+=a[j];
			else{
				int x;
				x=s.find(a[j]);
				s.erase(x);
				s+=a[j];
			}	
		}for(int j=0;j<s.size();j++){
			mp[s[j]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<mp[i]<<" ";
	}
} 
