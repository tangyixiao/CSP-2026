#include<stdio.h>
#include<cctype>
#include<bitset>
using namespace std;
int n,m,cnt[32],delTol;
bitset<32> a[200005];
bool del[200005];
int read(){
	char c=getchar();int x=0;
	for(;!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar()) x=x*10+c-'0';
	return x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();m=read();
	for(int i=0;i<n;i++){
		a[i]=read();
		for(int j=0;j<32;j++) if(a[i][j]) cnt[j]++;
	}
	for(int i=31;i>=0;i--){
		if(cnt[i]<m) continue;
		int d=0;
		for(int j=0;j<n;j++){
			if(!a[j][i]) d++;
		}
		if(n-delTol-d<m) continue;
		else{
			for(int j=0;j<n;j++){
				if(!a[j][i]){
					del[j]=1;
					for(int l=0;l<31;l++) if(a[j][l]) cnt[l]--;
					delTol++;
				}
			}		
		}
		if(n-delTol==m){
			bitset<32> ans;
			for(int j=0;j<31;j++) ans[j]=1;
			for(int j=0;j<n;j++) if(!del[j]) ans&=a[j];
			printf("%d",ans);
			return 0;
		}
	}
	bitset<32> ans;             
	for(int j=0;j<31;j++) ans[j]=1;
	for(int j=0;j<n;j++) if(!del[j]) ans&=a[j];
	printf("%d",ans);	           
	return 0;      	
}
