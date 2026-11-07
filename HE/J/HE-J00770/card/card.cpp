#include <bits/stdc++.h>
using namespace std;
int a[500010]={0},ans[300010]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int h=0,j=0;
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		j=i;h=a[j];ans[h]++;
		while(j<n){
			for(int k=n-1;k>0;k--){
				if(a[k]==h){
					j=k+1;
					h=a[j];
					ans[h]++;
					break;
				}
			}
		}
	}
	cout<<ans[1];
	for(int i=2;i<m;i++){
		cout<<" "<<ans[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
