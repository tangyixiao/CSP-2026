#include<bits/stdc++.h>
using namespace std;
int n,m,a[54188145],b[999999],cnt=0,x=0,t=1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<=999998;i++){
		b[i]=1;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}while(t){
		for(int i=m;i>=1;i++){
			if(b[i]<n){b[i]++;break;}
			else{b[i]=1;}
		}for(int j=1;j<m;j++){
			x=(a[b[j]]&a[b[j+1]]);
		}
		cnt=max(cnt,x);
		t=0;
		for(int k=1;k<=m;k++){
			if(b[k]!=n){
				t=1;
			}
		}
	}cout<<cnt;
	return 0;
}
