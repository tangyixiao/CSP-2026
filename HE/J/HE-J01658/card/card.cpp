#include<bits/stdc++.h>
using namespace std;
int a[200010];
int e[100010];
int c[100010];//模拟桌面上的牌 
int n,m,d,cnt; 
int b[100010];//记录数据位置 
void sc(int wz){
	b[c[wz]]=0;
	c[wz]=0;
	cnt--;
	if(c[wz+1]!=0)sc(wz+1);
} 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","W",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		cnt=0;
		for (int j=i;j<n;j++){
			d=a[i];
			if(b[d]!=0)sc(b[d]);
			b[d]=cnt;
			c[cnt-1]=d;
			cnt++;
		}
		for (int j=0;j<cnt;j++){
			e[c[j]]++;
			b[c[j]]=0;
			c[j]=0;
		}
	}for (int i=1;i<=m;i++){
		cout<<e[i]<<' ';
	}
	return 0;
}

