#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n,m;
pair<int,int> a[MAXN];
//string sum[MAXN];
//string pre;
//int ss[MAXN];
//void Make(int pos,int x){
//	while(x>0){
//		int s=x%2;
//		x/=2;
//		if(s==1) sum[pos]+='1';
//		else sum[pos]+='0';
//	}
//}
//void Get(int pos){
//	for(int i=0;i<=29;i++){
//		if(sum[pos][i]=='1' && pre[i]=='1'){
//			ss[i]+=2*pow(2,i+2);
//		}
//		else if(sum[pos][i]=='1' && pre[i]!='1'){
//			pre[i]='1';
//		}
//	}
//	ss[pos]+=ss[pos-1];
//}
//int getnum(string s,string t){
//	int res=0;
//	for(int i=0;i<=29;i++){
//		if(t[i]='1'){
//			res-=pow(2,i);
//		}
//		if(s[i]='1'){
//			res+=pow(2,i);
//		}
//	}
//	return res;
//}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].second);
//		Make(i,a[i].second);
//		Get(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j) a[i].first+=a[i].second&a[j].second;
		}
	}
//	for(int i=1;i<=n;i++){
//		a[i].first=(ss[i]+getnum(pre,sum[i]))&a[i].second;
//	}
	sort(a+1,a+n+1);
	int ans=a[n].second;
	for(int i=n-1;i>=n-m+1;i--){
		ans&=a[i].second;
	}
	printf("%d",ans);
} 
