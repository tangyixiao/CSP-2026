#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[510000],ans=-100,c[310000][2],d[310000],e[5100000],p[310000];
char s[204000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
		//	cout<<c[a[j]][0]<<" "<<a[j]<<" "<<j<<" "<<"$"<<endl;
			if(c[a[j]][0]==1){
			//	cout<<j<<" "<<endl;
				e[j]=a[j];
				
			for(int k=c[a[j]][1];k<j;k++){
			//	cout<<e[k]<<" "<<c[e[k]][0]<<endl;
			c[e[k]][0]=0,c[e[k]][1]=0;	e[k]=-1;
			}//cout<<endl;
				c[a[j]][1]=j;
				c[a[j]][0]=1;
		}else{
			c[a[j]][0]=1;c[a[j]][1]=j;
			e[j]=a[j];
		}
		}
	
		for(int j=i;j<=n;j++){
	//	cout<<e[j]<<" ";
			if(e[j]!=-1){
				p[e[j]]++;
				d[e[j]]++;
			}
		}//cout<<endl;
		for(int j=i;j<=n;j++){
			if(p[e[j]]>1){
				d[e[j]]-=(p[e[j]]-1);
			}p[e[j]]=0;
		}
		for(int j=1;j<=n;j++){
			c[a[j]][0]=0,c[a[j]][1]=0;e[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
	printf("%lld ",d[i]);
	}
	return 0;
}
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother

