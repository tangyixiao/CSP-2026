#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m,f;
long long a[N],ans,sum[N];
double s;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1,j=0;i<=n;i++){
		m=i-j;
		int t;
		char c1;
		scanf("%d",&t);
		cin>>c1;
		if(c1==c[m-1])j++;
		m=i-j;
		sum[m]=sum[m-1]+t,a[m]+=t,c[m]=c1;
	}
	s=sum[m]/2.0;
	for(int i=1;i<=m;i++) if(sum[i]>=s){f=i;break;}
//	cout<<f<<' ';
	for(int i=1,j=m;i<=f;i++)
	{
		while(a[i]){
			if(c[i]==c[j]){
				if(a[i]>=a[j])a[i]-=a[j],j--;
				else a[j]-=a[i],a[i]=0;
				//cout<<ans<<' 1 ';
			}else {
				if(a[i]>=a[j])a[i]-=a[j],ans+=a[j],j--;
				else a[j]-=a[i],ans+=a[i],a[i]=0;//cout<<ans<<endl;
			}
			
		}
		if(i==f&&j!=f) ans+=a[j];
	}
	cout<<ans;
	return 0;
}