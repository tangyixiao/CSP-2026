#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200002],a2[200002],x,y,ans;
char c[200002],c2[200002],q='0',p='0';
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	int m=1,s=0,j=0;
	char w='0';
	for(int i=1;i<=n;i++){
		scanf(" %lld %c",a2+i,c2+i);
		if(c2[i]==w){
			s+=a2[i];
		}else{
			a2[j]+=s;
			s=0;
			j=i;
			w=c2[i];
		}
	}
	if(s!=0)a2[j]+=s;
	int cnt=0;
	for(int i=1;i<=n;i++)
		if(c2[i]!=c2[i-1]){
			c[++cnt]=c2[i];
			a[cnt]=a2[i];
		}
	n=cnt;
	for(int i=1;i<=n>>1;i++)
		if(c[i]!=c[n-i+1]){
			if(q==c[n-i+1]){
				if(x<=a[n-i+1])a[n-i+1]-=x;
				else {
					if(i==n>>1)ans+=min(a[i],x-a[n-i+1]);
					a[i]+=x-a[n-i+1];
					a[n-i+1]=0;
				}
				q='0';
			}else if(q!='0'){
				a[i]+=x;
				q='0';
			}
			if(p==c[i]){
				if(y<=a[i])a[i]-=y;
				else {
					if(i==n>>1)ans+=min(a[n-i+1],y-a[i]);
					a[n-i+1]+=y-a[i];
					a[i]=0;
				}
				p='0';
			}else if(p!='0'){
				a[n-i+1]+=y;
				p='0';
			}
			ans+=min(a[i],a[n-i+1]);
			if(a[i]>a[n-i+1]){
				q=c[i];
				x=a[i]-a[n-i+1];
			}else if(a[i]<a[n-i+1]){
				p=c[n-i+1];
				y=a[n-i+1]-a[i];
			}else{
				q='0';
				p='0';
			}
		}else{
			if(q==c[n-i+1]){
				if(x<=a[n-i+1])a[n-i+1]-=x;
				else {
					if(i==n>>1)ans+=min(a[i],x-a[n-i+1]);
					a[i]+=x-a[n-i+1];
					a[n-i+1]=0;
				}
				q='0';
			}else if(q!='0'){
				a[i]+=x;
				ans+=x;
				q='0';
			}
			if(p==c[i]){
				if(y<=a[i])a[i]-=y;
				else {
					if(i==n>>1)ans+=min(a[n-i+1],y-a[i]);
					a[n-i+1]+=y-a[i];
					a[i]=0;
				}
				p='0';
			}else if(p!='0'){
				a[n-i+1]+=y;
				ans+=y;
				p='0';
			}
			if(a[i]>a[n-i+1]){
				q=c[i];
				x=a[i]-a[n-i+1];
			}else if(a[i]<a[n-i+1]){
				p=c[n-i+1];
				y=a[n-i+1]-a[i];
			}else{
				q='0';
				p='0';
			}
		}
	if(n&1){
		if(q!='0'){
			if(q!=c[n+1>>1])ans+=min(x,a[n+1>>1]);
		}else if(p!='0')if(p!=c[n+1>>1])ans+=min(y,a[n+1>>1]);
	}
	printf("%lld",ans);
	return 0;
}
