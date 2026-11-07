#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int n;cin>>n;
	string ans;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		char y;cin>>y;
		for(int j=1;j<=x;j++){
			ans+=y;
		}
	}
	int mid=ans.size()/2,cnt=0;
	for(int i=0;i<mid;i++){
		if(ans[i]!=ans[mid+i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
