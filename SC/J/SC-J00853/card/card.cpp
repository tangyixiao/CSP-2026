#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int a[500000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(mp[a[i]]%2==1&&mp[a[i]]>0){
			cout<<n<<' ';
			mp[a[i]]=0;	
		}
		else cout<<0<<' ';
	}
	return 0;
} 