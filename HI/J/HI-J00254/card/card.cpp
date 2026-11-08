#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
	int n,m,a[100005],l=0,b[10005],y=0;
	string h="";
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	b[a[n]]=n;l=a[n];
	if(l!=1){
for(int i=1;i<=n;i++){
	for(int j=i;j<=n;j++){
		if(a[i]==1) y++;
	}
}
if(y==1) b[1]=1;
else b[1]=2;

}

if(l!=2){
for(int i=1;i<=n;i++){
	for(int j=i;j<=n;j++){
		if(a[i]==2) y++;
	}
}
if(y==1) b[2]=1;
else b[2]=2;
}

if(l!=3){
for(int i=1;i<=n;i++){
	for(int j=i;j<=n;j++){
		if(a[i]==3) y++;
	}
}
if(y==1) b[3]=1;
else b[3]=2;
}
for(int i=1;i<=n;i++){
	cout<<b[i];
}
	return 0;
}
