#include<bits/stdc++.h>
using namespace std;
int q[2005];
int aa(int x,int y){
	string xx,yy;
	while(x!=0){
		xx+='0'+x%2;
		x/=2;
	}
	while(y!=0){
		yy+='0'+y%2;
		y/=2;
	}
	int minn=min(yy.size(),xx.size());
	string u;
	for(int i=0; i<minn; i++){
		if(xx[i]=='1'&&yy[i]=='1')u+='1';
		else u+='0';
	}
	int two=1,an=0;
	for(int i=0; i<u.size(); i++){
		if(i!=0)two*=2;
		an+=(u[i]-'0')*two;
	}
	return an;
}

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	if(m==1){
		int maxx=-1;
		for(int i=1; i<=n; i++){
			int q;
			cin>>q;
			maxx=max(q,maxx);
		}
		cout<<maxx;
		return 0;
	}
	for(int i=1; i<=n; i++){
		cin>>q[i];
	}
	int maxx=-1;
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			maxx=max(maxx,aa(q[i],q[j]));
		}
	}
	cout<<maxx;
	
	return 0;
}
