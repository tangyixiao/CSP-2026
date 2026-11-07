#include<bits/stdc++.h>
using namespace std;
long long n,a[200050],m;
char s[200050][40],now[40],ans[40],hc[40],hcl;
int el[200050],ls=0,ln,er[41];
void sze(int i,long long x){//十进制转二进制 
	int l = 0;
	while(x>0){
		s[i][++l]=x%2+'0';
		x/=2;
	}
	el[i]=l;
}
long long ansezs(){
	long long q = 0;
	for(int i = 1;i <= ls;i++){
		q+=(ans[i]-'0')*er[i-1];
	}
	return q;
}
void erand(int x,int y){//二进制and 
	for(int i = 1;i<=min(el[x],el[y]);i++){
		now[i]=(s[x][i])&&(s[y][i]);
	}
	ln=min(el[x],el[y]);
}
void erandnow(int x){//二进制and now
	for(int i = 1;i<=min(el[x],ln);i++){
		now[i]=(s[x][i])&&(now[i]);
	}
	ln=min(el[x],ln);
}
bool bj(){//判断二进制大小 
	if(ln>ls){
		return true;
	}else if(ln < ls){
		return false;
	}else{
		for(int i = ln;i >= 1;i--){
			if(now[i]<ans[i]){
				return false;
			}
		}
		return true;
	}
}
void solve(int nn,int c){
	if(c>m){
		if(bj()){
			for(int i = 1;i <= ln;i++){
				ans[i]=now[i];
			}
			ls=ln;
		}
		return;
	}
	if(nn>n) return;
	solve(nn+1,c);
	hcl=ln;
	for(int i = 1;i <= ln;i++){
		hc[i]=now[i];
	}
	erandnow(nn);
	solve(nn+1,c+1);
	for(int i = 1;i <= ln;i++){
		now[i]=hc[i];
	}
	ln=hcl;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long mmx = -1;
	er[0]=1;
	for(int i = 1;i <= 30;i++){
		er[i]=2*er[i-1];
	}	
	memset(ans,'0',sizeof(ans));	
	scanf("%lld%lld",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
		mmx=max(mmx,a[i]);
		sze(i,a[i]);
	}
	printf("%lld\n",mmx);
	return 0;
	
	memset(now,'1',sizeof(now));
	solve(1,0);
	long long aanns = ansezs();
	printf("%lld\n",aanns);
	return 0;
	
}

