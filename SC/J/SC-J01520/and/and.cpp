#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n,m,a[N],maxx;
string s[N],ss[N];
void jw(long long x,long long y){
	s[x][y]='0';
	s[x][y+1]++;
	if(s[x][y+1]=='2'){
		jw(x,y+1);
	}
}
void abc(long long x){
	s[x][1]=s[x][1]+a[x]%2;
	if(s[x][1]=='2'){
		jw(x,1);
	}
	a[x]/=2;
}
long long bbb(long long x,long long y,long long sum,long long summ){
	if(summ==0){
		summ=1;
	}else{
		summ=summ*2;
	}
	sum+=(ss[x][y]-'0')*y;
	if(ss[x][y+1]){
		bbb(x,y+1,sum,summ);
	}else{
		return sum;
	}
}
long long aaa(long long x,long long y,long long z){
	if(s[x][z]&&s[y][z]){
		ss[x][z]=1;
	}else{
		ss[x][y]=0;
	}
	if(s[x][z+1]&&s[y][z+1]){
		aaa(x,y,z+1);
	}else{
		return bbb(x,1,0,0);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		abc(i);
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i+1;j<=n;j++){
			maxx=max(maxx,aaa(i,j,1));
		}
	}
	cout<<maxx;
	return 0;
}