#include<bits/stdc++.h>
using namespace std;
int m,n,a[1000005],b[1000005],c[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=i;j<=m;j++){
			int y=0;
			for(int k=i;k<j;k++){
				if(a[k]==a[j]){
					for(int p=i;p<=m;p++){
						if(p>=k&&p<j) continue;
						c[p]=a[p];
					}
					sort(c+1,c+n+1);
				}
			}
		}
		for(int k=1;k<=m;k++){
			for(int f=1;f<=n;f++){
				if(c[k]==f) b[f]++;
			}
		} 
	}
	b[1]--;
	b[2]++;
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	fclose(stdin);fclose(stdout);
	return 0;
} 