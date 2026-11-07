#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],t1[300005],t2[300005],last[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(t1,0,sizeof(t1));
		memset(last,0,sizeof(last));
		for(int j=i;j<=n;j++){
			if(t1[a[j]]!=0){
				for(int k=last[a[j]];k<j;k++){
					if(t1[a[k]]>0){
						t1[a[k]]--;
					}
				}
			}t1[a[j]]++;last[a[j]]=j;
		}
		for(int j=1;j<=m;j++){
			if(t1[j]!=0){
				t2[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t2[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
