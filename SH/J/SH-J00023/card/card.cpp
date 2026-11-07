#include <bits/stdc++.h>
using namespace std;
int n,m,a[20],b[20],la1,la2,cnt1=0,cnt2=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			if (a[j]==1) {
				if (la1!=0 and b[la1]!=0){
					for (int k=la1;k<j;k++){
						b[k]=0;
					}
				}
				la1=j;
			}
			if (a[j]==2){
				if (la2!=0 and b[la2]!=0){
					for (int k=la2;k<j;k++){
						b[k]=0;
					}
				}
				la2=j;
			}
		}
		for (int k=i;k<=n;k++) cout<<b[i]<<" ";
		cout<<endl;
		for (int k=i;k<=n;k++){
			if (b[k]==1) cnt1++;
			if (b[k]==2) cnt2++;
			b[k]=a[k];
		}
		la1=0,la2=0;
		
	}
	
	return 0;
} 
