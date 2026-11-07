#include <bits/stdc++.h>
using namespace std;
int a[2035];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);	
	int n,m;
	int maxe=0;
	int maxee=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxe=max(maxe,a[i]);
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			maxee=max(maxee,(a[i]>>a[j]));
		}
	}
	if(m==1){
		cout<<maxe;
	}else if(m==2){
		cout<<maxee;
	}
	fclose(stdin);
	fclose(stdout);		
	return 0;
}
