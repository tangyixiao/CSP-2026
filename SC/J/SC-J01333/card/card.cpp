#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005];
vector<int> b;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(b.empty()==1){
			b.push_back(a[i]);
			ans[a[i]]++;
			continue;	
		}
		bool flag=0,k;
		int len=b.size()-1;
		for(int j=0;j<=len;j++){
			if(b[j]==a[i]){
				flag=1;
				k=j;
				break;
			}
		}
		if(flag==1){
			b.erase(b.begin()+k,b.end());
		}
		b.push_back(a[i]);
		len=b.size()-1;
		for(int j=0;j<=len;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}