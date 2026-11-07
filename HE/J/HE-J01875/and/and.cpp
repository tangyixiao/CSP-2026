#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[200005];
	string f,f1,f2;
	int fk,w=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
sort(a+1,a+n+5,cmp);
int l=0;
for(int j=1;j<=m;j++){
while(1){
	fk=a[j];
	if(fk=1){
		break;
	}
	f+=fk%2;
	fk=fk/2;
	w++;
}
for (int u=w;u<=8;u++){
	f+='0';
}
for(int i=w+1;i>-1;i--){
	if(l=0){
		f1+=f[i];
	}
		else f2+=f[i];
	}
	l=1;
	if(l=1){
		for(int m=1;m<=8;m++){
			if(f1[m]!=f2[m])f1[m]=0;
		}
	}
	
}
//cout<<f1;
cout <<a[1];
return 0;	
}

