#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10,L=32;
int a[N],n,m;
int b[N][L],cnt[L];
vector<int>v1[L],v2[L];
int ans;
bool cancelled[N];
inline void read(int &x){
	x=0;
	int f=1;
	char c=getchar();
	for(;c<'0'||c>'9';c=getchar()){
		if(c=='-')f=-1;
	}for(;c>='0'&&c<='9';c=getchar()){
		x=(x<<1)+(x<<3)+c-'0';
	}x*=f;
}inline void write(int x){
	if(x<0){
		x=-x;
		putchar('-');
	}if(x>9)write(x/10);
	putchar(x%10+'0');
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	read(n);read(m);
	for(int i=1;i<=n;i++){
		read(a[i]);
	}//sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;++j){
			if(a[i]&(1<<j)){
				b[i][j]=1;
				cnt[j]++;
				v1[j].push_back(i);
			}else{
				v2[j].push_back(i);
			}
		}
	}for(int i=30;i>=0;--i){
		if(cnt[i]>=m){
			ans+=(1<<i);
			for(int j=0;j<v2[i].size();++j){
				int to=v2[i][j];
				if(cancelled[to])continue;
				for(int k=i-1;k>=0;--k){
					if(a[to]&(1<<k))cnt[k]--;
				}cancelled[to]=1;
			}
		}
	}write(ans);
	return 0;
}