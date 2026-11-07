#include <bits/stdc++.h>
using namespace std;
int n,a,cnt=0,i1=1,i2;
char c;
char s[20000000];
//bool check(int mid){
//	int t=0;
//	for(int i=1;i<=cnt;i++){
//		if(s[i]==s[cnt+1-i]) t++;
//		if(t>mid) return false;
//	}
//	return true;
//}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++){
		scanf("%d%c",&a,&c);
		cnt=cnt+a;
		i2=i1+a;
		for( ;i1<i2; ){
			s[i1]=c;
			i1++;
		}
	}
//	int l=0,r=20000000,mid;
//	while(l<r){
//		mid=(l+r)>>1;
//		if(check(mid)){
//			r=mid;
//		}
//		else l=mid+1;
//	}
//		printf("%d",l);
		for(int i=1;i<=(cnt+1)/2;i++){
		if(s[i]==s[cnt+1-i]) ans++;
	}
	
	if(cnt%2==1) printf("%d",cnt-ans+1);
	 else printf("%d",cnt-ans-1);
	
	return 0;
}
