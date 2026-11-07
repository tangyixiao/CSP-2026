#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+10;
int n,m;
int a[MAXN],b[MAXN],c[MAXN];
bool check=true;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum,cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum=a[i];
			if(j>=i+1){
				for(int k=j-1;k>=0;k--){
					if(a[i]==sum&&a[i]!=0&&sum!=0){
						memset(b,0,sizeof(b));
						cnt=0;
						check=false;
						b[cnt++]=a[i];
						break;
					}
				}
			}
			if(check) b[cnt++]=a[i];
		}
			/*for(int i=0;i<cnt;i++){
			cout<<b[i]<<" ";
		}*/
		for(int j=0;j<m;j++){
			for(int k=0;k<cnt;k++){
				if(b[k]==m){
					c[j]+=1;
				}
			}
		}
		/*cout<<endl;*/
		check=true;
	}
	for(int i=0;i<m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
} 
