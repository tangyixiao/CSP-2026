#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		int s[500005];
		int r=1;
		for(int j=i;j<=n;j++){
			s[r]=a[j];
		    r++;
			for(int k=1;k<=j;k++){
				if(s[k]==s[r]){
					for(int v=k+1;v<=n;v++){
						s[v]=0;
					}
				}
			}
		}
		for(int h=1;h<=n;i++){
			b[h]+=s[h];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[m]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
