#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m;cin>>n>>m;
	vector<int>A(n),B(m,0),C(m,0);
	for(int i=0;i<n;i++)cin>>A[i];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			C[A[j]]++;
			if(C[A[j]]>1){
				for(int k=1;k<=m;k++)C[k]=0;
			}
		}
		for(int w=1;w<=m;w++){
			if(C[w]==1)B[w]+=1;
			C[w]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<B[i]<<" ";
	return 0;
}