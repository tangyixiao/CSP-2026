#include<bits/stdc++.h>
using namespace std;
struct shu{
	long long num;
	char c;
};
long long n,sum=0,ans=0;
shu a[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		sum+=a[i].num;
	}
	long x=1,y=n;
	while(x<=y){
		if(a[x].num<a[y].num){
			if(a[x].c!=a[y].c)
				ans+=a[x].num;
			a[y].num-=a[x].num;
			 x++;
		}
		else if(a[x].num>a[y].num){
			if(a[x].c!=a[y].c)
				ans+=a[y].num;
			a[x].num-=a[y].num;	
			y--;
		}
		else{
			if(a[x].c!=a[y].c)
				ans+=a[y].num;
			y--;
			x++;	
		}
		if(x==y)break;
	}
	cout<<ans;
	return 0;
}
