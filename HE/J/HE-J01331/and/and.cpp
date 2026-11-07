#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[100005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int max=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==j){
				j++;
			}
			if(a[i]&a[j]>=max){
				max=a[i]&a[j];
			}
		}
	}
	cout<<max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
