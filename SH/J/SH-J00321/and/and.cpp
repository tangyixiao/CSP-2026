#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>cdds;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cdds.push_back(i);
	}
	int ans=0;
	for(int i=30;i>=0;i--){
		int cnt=0;
		int s=1<<i;
		vector<int>new_cdds;
		for(auto j:cdds){
			if((a[j]&s)!=0){
				cnt++;
				new_cdds.push_back(j);
			}
		}
		if(cnt>=m){
			cdds=new_cdds;
			ans|=s;
		}
	}
	cout<<ans;
} 
