#include<bits/stdc++.h>
using namespace std;
const int Max_N=5*1e5+5,Max_M=3*1e5+5;
long long n,m,a[Max_N],b[Max_M],c[Max_N],top=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=top;k++){
				if(c[k]==a[j]){
					top=k-1;
					break;	
				}
			}
			top++;
			c[top]=a[j];
		}
		for(int j=1;j<=top;j++) b[c[j]]++;
		top=0;
	}
	for(int i=1;i<=m-1;i++) cout<<b[i]<<" ";
	cout<<b[m];
	return 0;
}
