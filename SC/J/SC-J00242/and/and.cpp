#include<bits/stdc++.h>
using namespace std;
vector<int> ve;
int main(){
//	ios::sync_with_stdio(0);
//	cin(0);
//	cout(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		ve.push_back(x);
	}
	sort(ve.begin(),ve.end());
	int cnt=ve[0];
	for(int i=0;i<m;i++){
		cnt&=ve[i];
	}
	
	if(m==1){
		cout<<ve[0];
		return 0;
	}
	if(m==2){
		cout<<ve[0]&ve[1];
		return 0;
	}
	cout<<cnt;
	return 0;
}