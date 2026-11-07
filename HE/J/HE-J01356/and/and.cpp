#include<bits/stdc++.h>
using namespace std;
int a[200010],n,m,b[200010][40],c[40];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		int t=1;
		for(int j=1;;j++){
			if(a[i]&t==t) b[i][j]=1,c[j]++;
			else b[i][j]=0;
			t<<1;
		}
	}
	int ans[200010],x,y=1,tail,an;
	for(int i=n;i>=1;i--){
		if(c[i]>=m){
			x=i;
		} 
	}
	for(int i=1;i<=n;i++){
		if(b[i][x]==1){
			ans[y]=i;
			y++;
			tail=y;
		}
	}
	x--;
	while(x>=1){
		int y1=y,ans1[200010];
		an=y,y=1;
		for(int i=1;i<=y1;i++){
			if(b[ans[i]][x]==1){
				ans1[y]=ans[i];
				y++;
			}
		}
		if(y<=m) break;
		for(int i=1;i<=y;i++){
			ans[i]=ans1[i];
		}
		x--;
	}
	int p=ans[1];
	if(y<m){
		y=an;
	}
	for(int i=2;i<=an;i++){
		p=p&ans[2];
	}
	printf("%d",p);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
