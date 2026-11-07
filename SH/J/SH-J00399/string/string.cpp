#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
long long a[N],b[N],lol;
char c[N],d[N];
int n;
struct ii{
	long long fir;
	int id;
	char x;
}s[2*N+1];
bool cmp(ii xx,ii yy){
	return xx.fir<yy.fir;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],b[n+1-i]=a[i],d[n+1-i]=c[i],lol+=a[i];
	long long sum1=1,sum2=1;
	for(int i=1;i<=n;i++) s[i]=(ii){sum1,1,c[i]},s[i+n]=(ii){sum2,2,d[i]},sum1+=a[i],sum2+=b[i];
	sort(s+1,s+2*n+1,cmp);
	char now1=c[1],now2=d[1];
	long long sum=0;
	long long re=1;
	s[2*n+1]=(ii){lol+1,0,' '};
	for(int i=3;i<=2*n+1;i++){
		if(now1!=now2) sum+=s[i].fir-re;
		if(s[i].id==1) now1=s[i].x;
		if(s[i].id==2) now2=s[i].x;
		re=s[i].fir;
	}
	cout<<sum/2<<endl;
	return 0;
}
