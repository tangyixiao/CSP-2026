#include<bits/stdc++.h>
using namespace std;
int a[500005],t1[300005],t[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		t1[a[i]]++;
		t[a[i]]+=i;
	}
	for(int i=n;i>=1;i--){
		if(t1[a[i]]>1){
			for(int j=1;j<i;j++){
				t[a[j]]--;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	} 
	return 0;
}