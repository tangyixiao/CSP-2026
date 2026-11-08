#include<iostream>
#include<cstring>
using namespace std;
int n,m;
int zp[500005];
bool zmy[300005];
int zpy[300005];
int main(){
	memset(zmy,sizeof(zmy),0);
	memset(zpy,sizeof(zpy),0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>zp[i];
//read
	for(int i=1;i<=n;i++)
	{
		for(int k=0;k<=m;k++)
			zmy[k]=0;
		int zm[300005]={0},y=0;
		for(int j=i;j<=n;j++)
		{
			if(zmy[zp[j]]==1)
			{
				for(int k=0;k<y;k++)
					zmy[zm[k]]=0,zm[k]=0;
				y=0;
			}
			zmy[zp[j]]=1,zm[y++]=zp[j];
//			
//			cout<<"Debug:"<<i<<" zm[]=";
//			for(int k=0;k<=m;k++)
//				cout<<zm[k]<<",";
///			cout<<"zmy[]=";
//			for(int k=0;k<=m;k++)
//				cout<<zmy[k]<<",";
//			cout<<endl;
//			
		}
//		cout<<"Debug:"<<i<<" zm[]=";
//		for(int k=0;k<=m;k++)
//			cout<<zm[k]<<",";
//		cout<<"zmy[]=";
//		for(int k=0;k<=m;k++)
//			cout<<zmy[k]<<",";
//		cout<<"dex"<<endl;
///		
		for(int j=1;j<=m;j++)
			zpy[j]+=zmy[j];
	}
//coment
	for(int i=1;i<=m;i++)
		cout<<zpy[i]<<" ";
//write
	return 0;
}
//8?
