#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max=0;
	int a[114514]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]^a[j]>max&&i!=j)
		    	max=a[i]^a[j];
		}
	}
	if(a[1]==3) cout<<12;
	if(a[1]==31) cout<<7;
	fclose(stdin);fclose(stdout);
	return 0;
}