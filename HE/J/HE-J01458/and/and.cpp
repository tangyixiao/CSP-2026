#include<bits/stdc++.h>
using namespace std;
struct JGT{
	int e,r,o;
}a[200005];
int cmp(JGT x,JGT y){
	if(x.o==y.o){
		return x.r>y.r;
	}
	return x.o>y.o;
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i].e);
		a[i].r=a[i].e;
	}
	int q=0,t=0;
	for(int i=0,y=0;i<m;i++){
		q=0;t=0;
		while(a[i].r!=0){
			if(a[i].r%2==1){
				q++;t+=y+1;
			}else{
				y++;
			}
			a[i].r/=2;
		}
		a[i].r=q;
		a[i].o=t;
	}
	sort(a,a+m,cmp);
	int cnt=a[0].e;
	for(int i=1;i<n;i++){
		cnt&=a[i].e;
		
	}
	printf("%d",cnt);
	return 0;
}
