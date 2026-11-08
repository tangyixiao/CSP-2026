#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int const N=2e5+10;
inline int readInt(){
	char c=getchar();int x=0,f=1;
	while(c<'0'||c>'9'){if(c=='-') f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}
int n,m,j=0,d,s[N],l[N],r[N],x,y,size,cnt,First=1,ans;
vector<int>a[40];
unordered_set<int>c[40];
bool t;
int dfs(int num,int ans,int fa){
	if(num>=m) return ans;
	int Max=0;
	for(int i=fa+1;i<=n;i++){
		if(n-i+num<m) return Max;
		Max=max(Max,dfs(num+1,(ans&s[i]),i));
	} 
	return Max;
}
bool cmp(int f,int s){return f>s;}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=readInt(),m=readInt();
		for(int i=1;i<=n;i++){
			x=y=readInt(),j=0;
			while(x){
				++j;
				if(x&1){
					a[j].push_back(y);
					c[j].insert(y);
				}
				x=(x>>1);
			}
		}
		for(int i=31;i>=1;i--){
			if(a[i].size()<m) continue;
			if(!t){
				for(int j=0;j<a[i].size();j++){
					s[++size]=a[i][j],l[size]=size-1,r[size]=size+1;
				}
				t=1;
			}else{
				cnt=First,d=0;
				for(int j=1;j<=size;j++){
					if((c[i].count(s[cnt]))) d++;
					cnt=r[cnt];
				}
				if(d<=m||size<=m||d==size) continue;
				cnt=First;
				for(int j=1;j<=size;j++){
					if(!(c[i].count(s[cnt]))){
						r[l[cnt]]=r[cnt],l[r[cnt]]=l[cnt];
						--size,--j;
						if(cnt==First) First=r[cnt];
					}
					cnt=r[cnt];
				}
			}
		}
		ans=s[First],cnt=r[First];
		for(int i=1;i<m;i++){
			ans=(ans&s[cnt]);
			cnt=r[cnt];
		}
		printf("%d",ans);
	return 0;
}
/*
5 3
31 3 1 15 7
*/
