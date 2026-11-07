#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans,p;
const int N=200005;
int a[N];
string s[N];
int f(int x,int y) {
	int q=0,sum=0;
	for(int i=0; i<min(s[x].size(),s[y].size()); i++) {
		sum+=pow(2,q)*((s[x][i]-'0')&(s[y][i])-'0');
		q++;
	}
	return sum;
}
int t(string k) {
	int q=0,sum=0;
	for(int i=0; i<k.size(); i++) {
		sum+=pow(2,q)*(k[i]-'0');
		q++;
	}
	return sum;
}
void solveA() {
	sort(a+1,a+n+1);
	ans=a[n];
}
void solveB() {
	for(int i=1; i<n; i++) {
		for(int j=i+1; j<=n; j++) {
			ans=max(ans,f(i,j));
		}
	}
}
void solveC() {
	for(int i=2; i<=n; i++) {
		string k;
		for(int j=0; j<min(s[1].size(),s[i].size()); j++) {
			int add=1;
			if(s[1][j]=='0'||s[i][j]=='0')add=0;
			k+='0'+add;
		}
		s[1]=k;
	}
	ans=t(s[1]);
}
void solveD() {
	for(int e=1; e<=n; e++) {
		int add[N];
		string k;
		for(int j=0; j<p; j++) {
			add[j]=1;
			for(int i=1; i<=n; i++) {
				if(i==e)continue;
				if(s[i].size()<=j||s[i][j]!='1'){
					add[j]=0;
					break;
				}
			}
		}	
		for(int j=0;j<p;j++){
			k+='0'+add[j];	
		}
		ans=max(ans,t(k));
	}
}
int g(int x,int y) {
	string s1,s2;
	while(x) {
		s1+=x%2+'0';
		x/=2;
	}
	while(y) {
		s2+=y%2+'0';
		y/=2;
	}
	int sum=0;
	int p=0;
	for(int i=0; i<min(s1.size(),s2.size()); i++) {
		int add=1;
		if(s1[i]=='0'||s2[i]=='0')add=0;
		sum+=pow(2,p)*add;
		p++;
	}
	return sum;
}
void dfs(int id,int num,int idx) {
	if(id==m+1) {
		ans=max(ans,num);
		return;
	}
	for(int i=idx+1; i<=n; i++) {
		dfs(id+1,g(num,a[i]),i);
	}
}
void solveE() {
	for(int i=1; i<=n; i++) {
		dfs(2,a[i],i);
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1; i<=n; i++) {
		int flag=0;
		int num=a[i];
		while(num) {
			s[i]+=num%2+'0';
			num/=2;
			flag++;
		}
		p=max(p,flag);
	}
	if(m==1)solveA();
	else if(m==2)solveB();
	else if(m==n)solveC();
	else if(m==n-1)solveD();
	else solveE();
	cout<<ans;
}
