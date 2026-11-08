#include<bits/stdc++.h>
using namespace std;

int main(){
freopen("subway.in", "r", stdin);
freopen("subway.out", "w", stdout);
int c,n,m,d,q,a[100],b[100][100],zhantai,i1=1,i2=1,j1=1,j2=1,x[100][100],y[100][100],an=0,e1,e2,n1,n2,n3,n4,j3,e3,e4;
cin>>c>>n>>m>>d>>q;
for(int i=1;i<=m;i++){
	cin>>a[i];
}for(int i=1;i<=n;i++){
	cin>>zhantai;
	for(int j=1;j<=2*zhantai;j++){
		if(j%2==0){
			cin>>x[j1][j2];
			j1++;
			j2++;
		}else{
			cin>>b[i1][i2];
			i1++;
			i2++;
		}
	}
}for(int i=1;i<=q;i++){
	for(int j=1;j<=2;j++){
		cin>>y[i][j];
	}for(int e=1;e<=j1;e++){
	    for(int p=1;p<=j2;p++){
		    if(y[i][1]==x[e][p]){
		    	e1=e;
		    	e2=p;
			}if(y[1][2]==x[e][p]){
		    	n1=e;
		    	n2=p;
			}
    	}
    }n3=y[e1][e2];
    n4=y[1][2];
	an=a[n3]+a[n4];
	if(e1!=n1){
    	for(int j=1;j<=j2;j++){
		    if(x[e1][j]==x[n1][j]){
		    	an=an+b[e1][j]+b[n1][j];
		    	j3=j;
		    	e3=n1;
				e4=e1;			
			}
	    }
	}i=0;
	an=an+b[e4][e2+i];
	while(x[e4][e2+i]!=x[e4][j3]){
		i++;
		an=an+b[e4][e2+i];
	}i=0;
	while(x[e3][j3+i]!=x[n1][n2]){
		i++;
		an=an+b[e3][j3+i];
	}cout<<an;
	an=0;
}
return 0;
}//0 2 5 20 2 4 1 9 2 5 3 1 5 2 7 4 6 3 2 3 3 4 5 7 1 3 1 2
