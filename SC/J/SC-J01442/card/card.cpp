#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0),table(1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=m;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			for(int k=j;k<=n;k++){
				if(a[k]==i){
					cnt++;
					break;
				}
			}
		}
		cout<<cnt<<" ";
		
	}
	return 0;
}