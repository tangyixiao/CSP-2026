#include<bits/stdc++.h>
using namespace std;
long long a1[200005];//数量 
char a2[200005];//字母 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		a1[i]=x,a2[i]=y;
	}
	long long x=1,y=n,ans=0,x1=0,y1=0;//x1/y1表示左边/右边差多少 
	while(x<=y){
		if(x1==0&&y1==0){
			if(a2[x]!=a2[y])ans+=min(a1[x],a1[y]);
			if(a1[x]<a1[y]){//右边多 
				x1=a1[y]-a1[x];
				x++;
			}else if(a1[x]>a1[y]){//左边多 
				y1=a1[x]-a1[y];
				y--;
			}else{
				x++;
				y--;
			}
		}else if(x1!=0){//左边全部与右边剩下 
			if(a1[x]>=x1){//左边的够填 
				y1=a1[x]-x1;
				if(a2[x]!=a2[y])ans+=x1;
				x1=0;
				y--;
			}else{//左边的不够填 
				x1-=a1[x];
				if(a2[x]!=a2[y])ans+=a1[x];
				x++;
			}
		}else{//y1!=0,即左边剩下与右边全部
			if(a1[y]>=y1){//右边够填 
				x1=a1[y]-y1;
				if(a2[x]!=a2[y])ans+=y1;
				y1=0;
				x++;
			}else{//右边不够填 
				y1-=a1[y];
				if(a2[x]!=a2[y])ans+=a1[y];
				y--;
			}
		}
	}
	cout<<ans;
	return 0;
}
//B
//按原样存储，一组一组对照和存储？ 