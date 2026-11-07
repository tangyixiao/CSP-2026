#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;
	cin>>n>>m;
    long long a[n+5],b[n+5]={0};
    for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		int flaga=0;
		for(int ii=i;ii<m;ii++){
			if(flaga==0) b[a[ii]]++;
			else{
				flaga=1;
				break;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}