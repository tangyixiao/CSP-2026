#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=4e5+10;
int n,a[maxn],tot;
ll b[maxn],ans;
char c[maxn],l[maxn],r[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	ll sum=0;
	for(int i=1;i<=n;i++) sum+=a[i];
	sum/=2;
	ll tmp=0;
	for(int i=1;i<=n;i++){
		if(tmp+a[i]<=sum) tmp+=a[i];
		else break;
		b[++tot]=tmp;
	}
	tmp=0;
	for(int i=n;i>=1;i--){
		if(tmp+a[i]<=sum) tmp+=a[i];
		else break;
		b[++tot]=tmp;
	}
	sort(b+1,b+tot+1);
	tot=unique(b+1,b+tot+1)-b-1;
	tmp=0; int p=1;
	for(int i=1;i<=n;i++){
		if(tmp<=sum) tmp+=a[i];
		else break;
		while(b[p]<=tmp){
			l[p]=c[i];
			p++;
		}
	}
	tmp=0; p=1;
	for(int i=n;i>=1;i--){
		if(tmp<=sum) tmp+=a[i];
		else break;
		while(b[p]<=tmp){
			r[p]=c[i];
			p++;
		}
	}
	for(int i=1;i<=tot;i++){
		if(l[i]!=r[i]){
			ans+=b[i]-b[i-1];
		}
	}
	cout<<ans<<'\n';
	fclose(stdin); fclose(stdout);
	return 0;
}
