#include <bits/stdc++.h>
using namespace std;
int n,a[200001];
long long s,b[200001][2],ans,l,r,lword,rword;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%c%c",&a[i],&c[0],&c[i]);
		b[i][0]=s+1;
		s+=a[i],b[i][1]=s;
	}
	r=s,l=1,lword=1,rword=n;
	long long st,fi;
	for(int i=1;i<=n;i++){
		st=b[i][0],fi=b[i][1];
		for(int j=st;j<=fi;j++){
			if(c[lword]!=c[rword]){
				ans++;
			}
			l++,r--;
			if(b[lword][1]<l)
				lword++;
			if(b[rword][0]>r)
				rword--;
			if(l>s/2||r<s/2){
				printf("%lld",ans);
				return 0; 
			}
		}
	}
}
