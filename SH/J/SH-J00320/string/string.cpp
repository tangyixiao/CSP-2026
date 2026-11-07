#include<bits/stdc++.h>
#define N 200003
using namespace std;
typedef long long ll;
int n,a[N],c[N],pre[N],maxai=-1;
int m,A[N],C[N];
void input(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp;char tmpc;
		scanf("%d %c",&tmp,&tmpc);
		a[i]=tmp,c[i]=(int)(tmpc-'a'+1);
		pre[i]=pre[i-1]+a[i];
		maxai=max(maxai,a[i]);
	}
}
void solven1(){
	printf("0\n");
}
void solven2(){
	if(c[1]==c[2])printf("0\n");
	else printf("%d\n",min(a[1],a[2]));
}
bool okaile1(){
	for(int i=1;i<=n;i++)
		if(a[i]!=1)return 0;
	return 1;
}
void solveaile1(){
	int ans=0;
	for(int i=1;i<=n/2;i++)
		if(c[i]!=c[n+1-i])ans++;
	printf("%d\n",ans);
}
string gens(int m,int* a,int* c){
	string s="";
	for(int i=1;i<=m;i++)
		for(int j=1;j<=a[i];j++)
			s+=(char)(c[i]-1+'a');
	return s;
}
string genrevs(int m,int* a,int* c){
	string s="";
	for(int i=m;i>=1;i--)
		for(int j=1;j<=a[i];j++)
			s+=(char)(c[i]-1+'a');
	return s;
}
void solvebf(){
	string s=gens(n,a,c);
//	cout<<s<<endl;
	int ans=0,L=s.length();
	for(int i=1;i<=L/2;i++){
//		printf("%c %c\n",s[i-1],s[L-i]);
		if(s[i-1]!=s[L-i])ans++;
	}
	printf("%d\n",ans);
}
void merge(){
	m=1;
	A[1]=a[1],C[1]=c[1];
	for(int i=2;i<=n;i++)
		if(c[i]!=c[m]){
			m++;
			A[m]=a[i],C[m]=c[i];
		}
		else A[m]+=a[i];
}
void solve(){
	solvebf();
//	merge();
//	string s=gens(m,A,C);
//	string s1=genrevs(m,A,C);
}
int main(){// Trick or Treat!
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	input();
//	solvebf();
	if(n==1)solven1();
	else if(n==2)solven2();
	else if(okaile1())solveaile1();
	else if(n*maxai<=100001)solvebf();
	else solve();
	return 0;
}
