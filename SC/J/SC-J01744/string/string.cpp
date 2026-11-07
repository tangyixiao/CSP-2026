#include<iostream>
#include<cstring>
using namespace std;
struct p{
	int a;
	char c;
}shu[10001];
int le[30];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	memset(le,0,sizeof(le));
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>shu[i].a>>shu[i].c;
	}
	int u;
	for(int i=1,j=n;i<=j;){
		u=min(shu[i].a,shu[j].a);
		if(shu[i].c!=shu[j].c){
			ans+=u;
			shu[i].a-=u,shu[j].a-=u;
		}
		else shu[i].a-=u,shu[j].a-=u;
		
		if(shu[i].a<=0) i++;
		if(shu[j].a<=0) j--;
	}
	cout<<ans;
} 