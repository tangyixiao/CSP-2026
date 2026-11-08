#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> arr(n),cnt(m+1,0),brr;
	for(int i=0;i<n;++i) cin>>arr[i];
	for(int i=0;i<n;++i){
		cnt[arr[i]]+=i+1;
		if(!i) brr.emplace_back(arr[i]);
		int b=*lower_bound(brr.begin(),brr.end(),arr[i]);
		if(b==arr[i]&&i){
			size_t c=brr.size();
			int some;
			for(size_t j=0;j<c;++j){
				if(brr[j]==b){
					some=j;
					break;
				}
			}
			for(size_t j=some;j<c;++j) if(brr[j]!=0) cnt[brr[j]]-=some+1,brr[j]=0;
		}
		if(i) brr.emplace_back(arr[i]);
	}
	for(int i=1;i<=m;++i) cout<<cnt[i]<<" ";
	cout<<"\n";
	return 0;}
