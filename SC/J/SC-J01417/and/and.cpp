#include<bits/stdc++.h>
using namespace std;
unsigned long long ulrd() {
	unsigned long long x=0;char c='l';
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();
	return x;
}
char crd() {
	char c=' ';
	while(c=='\t'||c=='\n'||c==' ')c=getchar();
	return c;
}
const long long maxa=pow(2,30);
int n,m;
bitset<30>a[200001]={};
int u=0;
bool cmp(int x,int y) {
	for(int i=u;i>=0;i--)
	if(a[x][i]!=a[y][i])return a[x][i]>a[y][i];
	return 0;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=ulrd(),m=ulrd();
	int maxbit=0;
	for(int i=1;i<=n;i++){
		long long x=ulrd();
		long long p=maxa;
		int o=30,maxbi=0;
		while(x){
			while(p>x){
				p>>=1,o--;
			}
			if(!maxbi)maxbi=o;
			x-=p,a[i][o]=1;
		}maxbit=max(maxbit,maxbi);
	}
	long long ans=0;
	for(int i=maxbit;i>=0;i--){
		vector<int>v;
		for(int j=1;j<=n;j++){
			if(a[j][i]){
				v.push_back(j);
			}
		}
		if(v.size()>=m){
			long long sum=0;
			u=i-1;
			sort(v.begin(),v.end(),cmp);
			for(int j=0;j<m;j++){
				long long p=maxa>>1,x=0;
				for(int k=29;k>=0;k--,p>>=1){
					if(a[v[j]][k])x+=p;
				}
				if(!sum)sum=x;
				else sum&=x;
			}
//			for(auto&i:v)cout<<i<<' ';putchar('\n');
			ans=sum;
			break;
		}
	}
	cout<<ans;
	return 0;
}