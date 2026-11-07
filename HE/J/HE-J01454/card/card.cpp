#include<bits/stdc++.h>
using namespace std;
int n,m;
queue<int>k;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<int>a(n+5,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end(),greater<int>());
	cout<<n<<" "<<a[0]<<" "<<a[1];



	return 0;
}
