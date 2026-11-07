#include<bits/stdc++.h>
using namespace std;
const int Max_n=5e5+5;
int n,m;
int a[Max_n],cnt[Max_n];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector<bool>temp(Max_n,false);
		for(int j=i;j<=n;j++){
			if(temp[a[j]]==false){
				temp[a[j]]=true;
			}
			else{
				int wz=0;
				for(int k=j-1;k>=1;k--){
					if(a[k]==a[j]){
						wz=k;
						break;
					}
				}
				for(int k=wz;k<=j;k++){
					temp[a[k]]=false;
				}
				temp[a[j]]=true;
			}
		}
		for(int j=1;j<=m;j++){
			cnt[j]+=temp[j];
		}
	}
	for(int i=1;i<=m;i++){
		if(i==1){
			cout<<cnt[i];
		}
		else{
			cout<<" "<<cnt[i];
		}
	}
	return 0;
}
