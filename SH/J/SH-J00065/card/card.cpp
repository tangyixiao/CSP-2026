#include <bits/stdc++.h>
using namespace std;
int card[500001];
int slot[500001];
int check[300001];
int ans[300001];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		int end=0;
		for(int j=i;j<=m;j++){
			if(check[card[j]]==0){
				slot[j-i+1]=card[j];
				cout<<j-i+1<<' '<<slot[j-i+1]<<endl;
				check[card[j]]++;
				end++;
			}
			else{
				for(int k=j-i+1;k<=n;k++){
					slot[k]==0;
					cout<<k<<' '<<slot[k]<<endl;
				}
				end=j;
			}
			cout<<"        "<<j-i+1<<' '<<slot[j-i+1]<<endl;
		}
		if(slot[end]==i) ans[i]++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
