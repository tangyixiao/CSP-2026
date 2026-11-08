#include<bits/stdc++.h>
using namespace std;
int arr[200001];
vector<int>v[200001];
int nt[200001];
int ans[200001];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++){
		if(nt[arr[i]]!=0){
			v[nt[arr[i]]].push_back(i);
		}
		nt[arr[i]]=i;
	}
	
	for(int i=1;i<=n;i++){
//		ans[i]++;
		int k=i;
		int t=0;
		while(k<=n){
			if(t==0)ans[arr[k]]++;
			if(v[k].size()==0){
				k++;
				t=0;
			}
			else{
				for(int e:v[k]){
					k=e;
					t=1;
				}
			}
//			cout<<k<<" ";
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
