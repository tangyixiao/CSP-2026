#include<bits/stdc++.h>
using namespace std;
struct id{
	long long m;
	char s;
};
const int N=2e5+3;int n;
id x[N];
char search(int st,int en,int k){
	if(st+1==en)return x[en].s;
	int mid=(st+en)/2;
	if(k>x[mid].m)return search(mid,en,k);
	else if(k==x[mid].m)return x[mid].s;
	else return search(st,mid,k);
}
int main(){
	freopen("string,in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0;
	x[0].m=0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		int k;scanf("%d%s",&k,&x[i].s);
		x[i].m=x[i-1].m+k;
	}
	for(long long i=1;i<=x[n].m/2;++i){
		if(search(0,n,i)!=search(1,n,x[n].m+1-i))ans++;
	}
	printf("%lld",ans);
	fclose(stdin);fclose(stdout);
	return 0;
}
