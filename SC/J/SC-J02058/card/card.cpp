#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],ans[N],s[N],tot,mx[N],b[N],b2[N],l;
bool _1=1,in[N];
int main(){
	freopen("card.in","r",stdin),freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%d",&a[i]),_1&=(!i||a[i-1]<=a[i]);
	if(_1){
		for(int i=0;i<n;i++)mx[a[i]]=i;
		for(int i=1;i<=m;i++)printf("%d ",mx[i]+1);
		return 0;
	}
	for(int i=0;i<n;i++){
		if(!i||a[i]!=a[i-1])b[l]=a[i],b2[l++]=i;
	}
	b2[l]=n;
	if(l<=5000){
		for(int i=0;i<l;i++){
			for(int j=i;j<l;j++){
				while(in[b[j]])in[s[--tot]]=0;
				in[s[tot++]=b[j]]=1;
			}
			while(tot)ans[s[--tot]]+=(b2[i+1]-b2[i]),in[s[tot]]=0;
		}
		for(int i=1;i<=m;i++)printf("%d ",ans[i]);
//		printf("\n");
//		for(int i=1;i<=m;i++)ans[i]=0;
//		for(int i=0;i<n;i++){
//			for(int j=i;j<n;j++){
//				while(in[a[j]])in[s[--tot]]=0;
//				in[s[tot++]=a[j]]=1;
//			}
//			while(tot)ans[s[--tot]]++,in[s[tot]]=0;
//		}
//		for(int i=1;i<=m;i++)printf("%d ",ans[i]);
		return 0;
	}
	if(m==1){
		printf("%d ",n);
		return 0;
	}
	if(m==2){
		for(int i=0;i<l;i++){
			if(b[i]!=b[l-1])ans[b[i]]+=(b2[i+1]-b2[i]);
			ans[b[l-1]]+=(b2[i+1]-b2[i]);
		}
		for(int i=1;i<=m;i++)printf("%d ",ans[i]);
		return 0;
	}
}