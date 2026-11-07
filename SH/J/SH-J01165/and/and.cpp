#include <bits/stdc++.h> 
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
struct node{
	string str;
	int l;
};
bool cm(node x,node y){
	return x.str>y.str;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	node sumn;
	cin>>n>>m;
	int a[n+1]={};
	node b[m+1]={};
	node s[n+1]={};
	int c[m/=1]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		int x=a[i];
		while(x){
			s[i].str+=char(x%2+48);
			x/=2;
			s[i].l++;
		}
	}
	sumn=s[1];
	int le=sumn.l;
	int com=1;
	for(int i=1;i<=le;i++){
		com*=2;
	}
	int p=0;
	for(int i=1;i<=n;i++){
		if(sumn.l==s[i].l){
			b[p+1]=s[i];
			s[i].l--;
			string h;
			for(int j=0;j<s[i].l;j++){
				h+=s[i].str[j];
			}
			s[i].str=h;
			p++;
		}
	}
	if(p<m) p=0;
	sort(s+1,s+n+1,cm);
	while(p<m){
		le--;
		for(int i=1;i<=n;i++){
			if(le==s[i].l){
				b[p+1]=s[i];
				s[i].l--;
				string h;
				for(int j=0;j<s[i].l;j++){
					h+=s[i].str[j];
				}
				s[i].str=h;
				p++;
			}
		}
		if(p<m) p=0;
		sort(s+1,s+n+1,cm);
	}
	sort(b+1,b+p+1,cm);
	for(int i=1;i<=m;i++){
		node x=b[i];
		int p=0;
		while(x.l>p){
			int z=x.str[p]-48;
			for(int j=1;j<=p;j++){
				z*=2;
			}
			c[i]+=z;
			p++;
		}
		if(i!=1) c[i]=c[i]&c[i-1];
	}
	cout<<c[m];
	return 0;
}
