#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2*1e5+10;
int a[N],deep[N],maxx=-1;
int m,n,k[36],tong[36];
void dfs(int id,int choose){
	if(choose==m||id>n){
		int Iand=deep[1];
		for(int i=2;i<=m;i++) Iand&=deep[i];
		maxx=max(maxx,Iand);
		return ; 
	}
	dfs(id+1,choose);
	deep[choose+1]=a[id];
	dfs(id+1,choose+1);
	deep[choose+1]=0;
	return ;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    int da=1,db=1,poiu=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    k[0]=1;
    for(int i=1;i<=30;i++) k[i]=k[i-1]*2;
    for(int i=1;i<=n;i++){
    	poiu=0;
    	for(int j=0;j<=30;j++)
    	    if(a[i]==k[j]-1){
    	    	poiu=1;
    	    	break;
			}
		da&=poiu;
	}
	for(int i=1;i<=n;i++)
	    if(a[i]!=i-1){
	    	db=0;
	    	break;
		}
    if(n<=20){
    	dfs(1,0);
    	cout<<maxx;
    	return 0;
	}
	int pjh=-1,zhx=a[1],th=-1;
	if(m==1){
		for(int i=1;i<=n;i++) pjh=max(pjh,a[i]);
		cout<<pjh;
		return 0;
	}
	if(m==n){
		for(int i=2;i<=n;i++) zhx&=a[i];
		cout<<zhx;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n-1;i++)
		    for(int j=i+1;j<=n;j++)
		        th=max(th,a[i]&a[j]);
	    cout<<th;
	    return 0;
	}
	int cro=0,v;
	if(da==1){
		for(int i=1;i<=n;i++)
		    for(int j=0;j<=30;j++)
		        if(a[i]==k[j]-1){
		        	tong[j]++;
		        	break;
				}
		for(int i=30;i>=0;i--){
			cro+=tong[i];
			if(cro>=m){
				v=i;
				break;
			}
		}
		cout<<k[v];
		return 0;
	}
	cout<<0;
	return 0;
}