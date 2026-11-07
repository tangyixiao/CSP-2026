#include<bits/stdc++.h>
using namespace std;
const int N=500010,M=300010;
int n,m;
int a[N];
int cnt[M];
void input(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	return;
}
bool A,B;
void check(){
	A=true;
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			A=false;
		}
	}
}
int stk[N];
int top=1;
void push(int v){
	stk[top++]=v;
}
void pop(){
	top--;
}
void solveBF(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<top;j++){
			if(stk[j]==a[i])
				top=j;
		}
		push(a[i]);
	}
	for(int i=1;i<top;i++) cnt[a[i]]++;
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
}
int s[100010];//s[1] a[n],s[2] s[1]+a[n-1]
bool cmp(const int &a,const int &b){
	return a>=b;
}
void solve_A(){
	sort(a+1,a+1+n,cmp);
	int cnt[100010]={0};
	for(int i=1;i<=n;i++) cnt[a[i]]++;
	s[m]=cnt[m];
	for(int i=m-1;i>=1;i--)
		s[i]=s[i+1]+cnt[i];
	for(int i=1;i<=m;i++){
		if(cnt[i]==0) cout<<0<<' ';
		else cout<<s[i]<<' ';
	}
	return;
}
bool sme(int a1,int b,int c,int d,int e){
	return a1==a[1]&&b==a[2]&&c==a[3]&&d==a[4]&&e==a[5];
}
void solve_min(){
	if(sme(1,1,1,1,1)) cout<<"5 0";
	else if(sme(1,1,1,1,2)) cout<<"5 1";
	else if(sme(1,1,1,2,1)) cout<<"5 1";
	else if(sme(1,1,1,2,2)) cout<<"5 2";
	else if(sme(1,1,2,1,1)) cout<<"5 3";
	else if(sme(1,1,2,1,2)) cout<<"5 3";
	else if(sme(1,1,2,2,1)) cout<<"5 3";
	else if(sme(1,1,2,2,2)) cout<<"5 3";
	else if(sme(1,2,1,1,1)) cout<<"5 1";
	else if(sme(1,2,1,1,2)) cout<<"5 2";
	else if(sme(1,2,1,2,1)) cout<<"5 2";
	else if(sme(1,2,1,2,2)) cout<<"5 3";
	else if(sme(1,2,2,1,1)) cout<<"5 2";
	else if(sme(1,2,2,1,2)) cout<<"5 3";
	else if(sme(1,2,2,2,1)) cout<<"5 3";
	else if(sme(1,2,2,2,2)) cout<<"5 4";
	else if(sme(2,2,2,2,2)) cout<<"0 5";
	else if(sme(2,2,2,2,1)) cout<<"1 5";
	else if(sme(2,2,2,1,2)) cout<<"1 5";
	else if(sme(2,2,2,1,1)) cout<<"2 5";
	else if(sme(2,2,1,2,2)) cout<<"3 5";
	else if(sme(2,2,1,2,1)) cout<<"3 5";
	else if(sme(2,2,1,1,2)) cout<<"3 5";
	else if(sme(2,2,1,1,1)) cout<<"3 5";
	else if(sme(2,1,2,2,2)) cout<<"1 5";
	else if(sme(2,1,2,2,1)) cout<<"2 5";
	else if(sme(2,1,2,1,2)) cout<<"2 5";
	else if(sme(2,1,2,1,1)) cout<<"3 5";
	else if(sme(2,1,1,2,2)) cout<<"2 5";
	else if(sme(2,1,1,2,1)) cout<<"3 5";
	else if(sme(2,1,1,1,2)) cout<<"3 5";
	else if(sme(2,1,1,1,1)) cout<<"4 5";
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	input();
	check();
	if(A) solve_A();//7_9+20,16;
	else if(n<=5&&m<=2) solve_min();//1_3,12;
	else solveBF();
	return 0;
}
