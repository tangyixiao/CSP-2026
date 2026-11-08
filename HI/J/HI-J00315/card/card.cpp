#include<cstdio>
#include<cstring>
#include<iostream>
#include<stack>
#define MXM 200005
#define MXN 500005
using namespace std;
bool v[MXM];
int A[MXM],a[MXN],c[MXM],p[MXM],m,n;
stack<int>t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],p[a[i]]=i,c[a[i]]++;
	for(int i=1;i<=n;i++){
		if(v[a[i]])continue;
		for(int j=i;j<=n;j++){
			if(p[a[j]]>j)j=p[a[j]];//¸ïÃü£¡£¡£¡ 
			t.push(a[j]);
		}
		while(!t.empty())A[t.top()]+=c[a[i]],t.pop();
		v[a[i]]=1;
		//cout<<"-----\n";
		//if(i%1000==0)cout<<i<<endl;
	}
	for(int i=1;i<=m;i++)cout<<A[i]<<" ";
	return 0;
}
