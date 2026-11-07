#include<bits/stdc++.h>
using namespace std;
int x[200005];
bool cmp(int a,int b){
	int x=0,y=0;
	for(int i=a;i>0;i=i/2){
		if(i&1){
			x++;
		}
	}
	for(int i=b;i>0;i=i/2){
		if(i&1){
			y++;
		}
	}
	if(x!=y){
		return x>y;
	}
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int k=0,p;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		k=max(k,x[i]);
		if(i==1){
			p=x[i];
		}else{
			p=p&x[i];
		}
	}
	if(m==1){
		cout<<k<<endl;
		return 0;
	}
	if(m==n){
		cout<<p<<endl;
	}
	sort(x+1,x+1+n,cmp);
	int v=x[1];
	for(int i=2;i<=m;i++){
		v=v&x[i];
	}
	cout<<v<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
