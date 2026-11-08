#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	for(int i=0;i<n;++i){
		cin>>arr[i];
	} 
	sort(arr.begin(),arr.end());
	int cnt=arr[n-1];
	m--;
	for(int i=n-2;i>=m;--i){
		cnt&=arr[i];
	}
	cout<<cnt<<"\n";
	return 0;}
