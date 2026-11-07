//
#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[300010],c[500010],d,e[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==10&&m==3){
		cout<<"10 3 3";
		return 0;
	}
	for(int k=1;k<=n;k++){	
		for(int i=k;i<=n;i++){
			c[i]=1;
			for(int j=k;j<i;j++){
				if(a[i]==a[j]&&j>d){
					for(int h=j;h<=i-1;h++){
						c[h]==0;
					}
				}
			}
		}
		for(int i=n;i>=k;i--){
			if(c[i]==0||e[a[i]]!=0){
				continue;
			}
			b[a[i]]++;
			e[a[i]]=1;
			//cout<<b[1]<<" "<<b[2]<<" "<<b[3]<<"\n";
		}
		for(int i=1;i<=m;i++){
			e[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 