#include<bits/stdc++.h>
using namespace std;
int n,m;
long long sum;
struct school{
	string erjinzhi;
	int shuzi;
};
string er(int x){
	string t;
	while(x!=0){
		char p=(x%2)+'0';
		t=p+t;
		x/=2;
	}
	return t;
}
bool cmp(school a,school b){
	return a.erjinzhi>b.erjinzhi;
}
school ppp[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ppp[i].shuzi;
		ppp[i].erjinzhi=er(ppp[i].shuzi);
	}
	sort(ppp+1,ppp+n+1,cmp);
	sum=ppp[1].shuzi;
	for(int i=2;i<=m;i++){
		sum=sum&ppp[i].shuzi;
	}
	cout<<sum;
	return 0;
}