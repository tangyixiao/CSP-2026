#include<bits/stdc++.h>
using namespace std;
long long a[500005];
int st[500005];
int death[500005];
int cx[500005];//下标代表某一个数，数值代表出现位置 
vector<int>xc;
char buf[1<<22],*p1,*p2;
inline char gc(){
	   if(p1==p2)p2=(p1=buf)+fread(buf,1,1<<22,stdin);
	   if(p1==p2)return EOF;
	   return *p1++;
}
inline long long readlong(){
	   long long s=0,f=1;
	   char yb=gc();
	   while(yb<'0'||yb>'9'){
	   		if(yb=='-'){
				f=-1;
			}
			yb=gc();
	   }
	   while(yb>='0'&&yb<='9'){
			s=s*10+yb-'0';
			yb=gc();
	   }
	   return s*f;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		if(cx[i]!=0){
			death[i]=cx[i];
			st[cx[i]]=i;
		} 
		else xc.push_back(i);
		cx[i]=i;
	}
	for(int i=1;i<=m;i++){
		int x=rand();
		cout<<x%n<<endl;
	} 
	
	return 0;
}
