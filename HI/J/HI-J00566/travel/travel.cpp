#include<bits/stdc++.h>
using namespace std;
    char b[3],d[3];
    bool i=0,p=0,q=0,o=0;
    int a,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	for(int y=1;y<=3;y++){
	cin>>b[y];
	}
	cin>>c;
	for(int y=1;y<=3;y++){
	cin>>d[y];
	}
	if(a==c){
    i=1;
	if(b[1]==d[1]&&b[2]==d[2]){
	p=1;
	if('A'<=b[3]<='C'&&'A'<=d[3]<='C'&&b[3]!='D'&&d[3]!='D'){
	q=1;
}
	else if('A'<=b[3]<='C'&&'A'<=d[3]<='C'&&b[3]!='C'&&d[3]!='C'){
	q=1;	
    if(b[3]-d[3]==1&&'A'<=b[3]<='C'&&'A'<=d[3]<='C'&&d[3]-b[3]==1)
    o=1;
    else if(d[3]-b[3]==1&&'D'<=b[3]<='F'&&'D'<=d[3]<='F'&&b[3]-d[3]==1)
    o=1;
}
}
}
    cout<<i<<p<<q<<o;
	return 0;
}
