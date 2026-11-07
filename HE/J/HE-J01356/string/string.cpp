#include<bits/stdc++.h>
using namespace std;
int n;
long long b1[200010],b2[200010];
char cb[200010],cc[200010];
long long a[200010],a1[200010],l,L=0,ans=0;
char c[200010],c1[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		L=L+a[i];
	}
	int x=1;
	for(int i=1;i<=n;i++){
		if(c[i]==c[i+1]){
			c1[x]=c[i];
			a1[x]=a[i]+a[i+1];
		}
		else x++;
	}
	l=L/2;
	int le=0,r=0,ll,lr;
	for(int i=1;i<=x;i++){
		if(le+a1[i]<=l){
			b1[i]=a1[i];
			cb[i]=c1[i];
			le+=a[i];
		}
		else{
			b1[i]=l-le;
			cb[i]=c1[i];
			ll=i;
			break;
		}
	}
	for(int i=x;i>=1;i--){
		if(r+a1[i]<=l){
			b2[L+1-i]=a1[i];
			cc[L+1-i]=c1[i];
			le+=a[i];
		}
		else{
			b2[L+1-i]=l-r;
			cc[L+1-i]=c1[i];
			lr=i;
			break;
		}
	}
	int head=1,tail=1;
	while(head<=ll&&tail<=lr){
		if(cb[head]!=cc[tail]){
			if(b1[head]>b2[tail]){
				ans=ans+b2[tail];
				b1[head]-=b2[tail];
				tail++;
			}
			if(b1[head]==b2[tail]){
				head++,tail++; 
			}
			if(b1[head]<b2[tail]){
				ans=ans+b1[head];
				b2[tail]-=b1[head];
				head++;
			}
		}
		if(cb[head]==cc[tail]){
			if(b1[head]>b2[tail]){
				b1[head]-=b2[tail];
				tail++;
			}
			if(b1[head]==b2[tail]){
				head++,tail++; 
			}
			if(b1[head]<b2[tail]){
				b2[tail]-=b1[head];
				head++;
			}
		}
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
