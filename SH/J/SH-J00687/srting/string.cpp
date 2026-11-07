#include<bits/stdc++.h>
using namespace std;
long long n,sum,cnt;
struct PJSK{
	int j;
	char s;
}zzz[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		zzz[i].j=a;
		zzz[i].s=c;
		sum+=a;
	}
	int a=1,b=zzz[n].j,z=1,zz=n;
	while(a<=sum/2){
		if(a>zzz[z].j){
			a=1;
			z++;
		}
		if(b<1){
			zz--;
			b=zzz[zz].j;
		}
		if(zzz[z].s!=zzz[zz].s)cnt++;
		a++;
		b--;
	}
	cout<<cnt;
}
