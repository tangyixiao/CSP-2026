#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
long long len,ans,b1[27],d1[27];
struct node{
	long long l,r;
};
node b[27][200005];
node d[27][200005];
int c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char s;
		cin>>a[i]>>s;
		len+=a[i];
		c[i]=s-96;
	}
	int f=len%2;
	len/=2;
	long long pos=1,tmp=0,tag=0;
	for(int i=1;i<=n;i++){
		if(pos+a[i]>len){
			tmp=len-pos+1;
			b[c[i]][++b1[c[i]]].l=pos;
			b[c[i]][b1[c[i]]].r=pos+tmp-1;
			pos+=tmp;
			tag=i;
			tmp=a[i]-tmp-f;
			break;
		}
		b[c[i]][++b1[c[i]]].l=pos;
		b[c[i]][b1[c[i]]].r=pos+a[i]-1;
		pos+=a[i];
	}
	cout<<'\n';
	pos=1;
	for(int i=n;i>=tag;i--){
		if(i==tag){
			if(tmp==0) break;
			d[c[i]][++d1[c[i]]].l=pos;
			d[c[i]][d1[c[i]]].r=pos+tmp-1;
			pos+=tmp;
			break;
		}
		d[c[i]][++d1[c[i]]].l=pos;
		d[c[i]][d1[c[i]]].r=pos+a[i]-1;
		pos+=a[i];
	}
	ans=len;
	for(int i=1;i<=26;i++){
		if(b1[i]==0||d1[i]==0) continue;
		int bb=1,dd=1;
		while(1){
			long long Lb=b[i][bb].l,Rb=b[i][bb].r;
			long long Ld=d[i][dd].l,Rd=d[i][dd].r;
			if(Lb>Rd) dd++;
			else if(Ld>Rb) bb++;
			else{
				long long ll=max(Lb,Ld);
				long long rr=min(Rb,Rd);
				ans-=(rr-ll+1);
				if(Rb<Rd) bb++;
				else if(Rb>Rd) dd++;
				else{
					bb++;
					dd++;
				}
			}
			if(dd>d1[i]) break;
			if(bb>b1[i]) break;
		}
	}
	cout<<ans;
	return 0;
}
