#include<cstdio>
#include<iostream>
#include<vector>
#define LL long long
#define MXN 200005
using namespace std;
struct NODE{
	LL p;
	char c;
};
char c[MXN];
int n;
LL A,a[MXN],l,np[MXN],p[MXN];
vector<NODE>s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i],p[i]=l,l+=a[i];
	p[n+1]=l;
	for(int i=1;i<=n;i++)np[i]=l-p[n-i+2];
	for(int i=1,j=1;i<=n||j<=n;){
		if(j>n||p[i]<np[j])s.push_back({p[i],c[i]}),i++;
		else if(i>n||p[i]>np[j])s.push_back({np[j],0}),j++;
		else s.push_back({p[i],c[i]}),i++,j++;
	}
	for(int i=0,j=1;i<s.size()&&j<=n;i++){
		if(j<n&&s[i].p>=p[j+1])j++;
		s[i].c=c[j];
	}
	n=s.size();
	for(int i=0;i<n/2;i++)if(s[i].c!=s[n-i-1].c)A+=s[i+1].p-s[i].p;
	cout<<A;
	return 0;
}
