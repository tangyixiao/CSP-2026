#include<bits/stdc++.h> 
using namespace std;
int n,a[500005],c[5005][3005],b[5005][3005][2],s[300005],m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int t=1;t<=i;t++){
			c[t][a[i]]++;
			if(c[t][a[i]]>1)b[t][a[i]][1]=i;
			else b[t][a[i]][0]=i;
		}
	}
	for(int i=1;i<=n;i++){
		int j;
		for(j=i;j<=n;){
			if(c[i][a[j]]>1&&b[i][a[j]][1]>j){
				for(int k=j;k<b[i][a[j]][1];k++){
					c[i][a[k]]--;
				}
				j=b[i][a[j]][1];
			}else j++;
		}
		for(j=1;j<=m;j++){
			if(c[i][j]>0){
				s[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<' ';
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/