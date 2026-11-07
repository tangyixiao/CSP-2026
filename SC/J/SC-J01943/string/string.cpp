#include<bits/stdc++.h>
using namespace std;
int n;
char sc,c1,c2;
bool f;
string ss;
int xx;
int shu;
long long sum;
struct node{
	int x;
	char s;
}cc[200006];
long long a[30];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>xx>>sc;
		cc[i].x=xx;
		cc[i].s=sc;
		if(cc[i-1].s>sc) f=1;
		if(a[sc-'a']==0) shu++;
		a[sc-'a']+=xx;
		if(i==1) c1=sc;
		else c2=sc;
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(shu==2&&!f){
		if(a[c1-'a']<a[c2-'a']){
			cout<<a[c1-'a'];
		}else{
			cout<<a[c2-'a'];
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=cc[i].x;j++){
			ss+=cc[i].s;
		}
	}
//	cout<<ss;
	int len=ss.size();
	for(int i=0;i<(len-1)/2;i++){
		if(ss[i]!=ss[len-i-1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}