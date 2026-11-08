#include<bits/stdc++.h>
using namespace std;
long long n,a,sum[1000010],t,ans,f,zk,FL;
string k;
char s,zz,kk;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>s;
		k[++t]=s;
		sum[t]=a; 
	}
	for(int i=1;i<=t/2;i++){
		if(k[i]!=k[t-i+1]){
			FL=1;
			break;
		}
	}
	if(FL==0){
		cout<<0;
		return 0;
	}
	zz=k[1];
	kk=k[t];
//	cout<<t;
	long long m=1,j=t;
	while(1){
		//cout<<ans<<" "<<f<<' '<<zz<<" "<<kk<<" "<<m<<" "<<j<<endl;
		if(m>=j) break;
		if(zz!=kk){
			if(f==0&&sum[m]==sum[j]) ans+=sum[m],zz=k[++m],kk=k[--j],zk=0;
			else if(f==0){
				if(sum[m]>sum[j]) f=sum[m]-sum[j],ans+=sum[j],kk=k[--j],zk=0;
				else f=sum[j]-sum[m],ans+=sum[m],zz=k[++m],zk=1;
			}
			else if(f!=0){
				if(zk==0){
					if(f>sum[j]) ans+=sum[j],f-=sum[j],zk=0,kk=k[--j];
					else if(f==sum[j]) ans+=sum[j],f=0,zk=0,kk=k[--j],zz=k[++m];
					else ans+=f,f=sum[j]-f,zk=1,zz=k[++m];
				}
				else{
					if(f>sum[m]) ans+=sum[m],f-=sum[m],zk=1,zz=k[++m];
					else if(f==sum[m]) ans+=sum[m],f-=sum[m],zk=0,kk=k[--j],zz=k[++m];
					else ans+=f,f=sum[m]-f,zk=0,kk=k[--j];
				}
			}
		}
		else{
			if(f==0){
				if(sum[j]==sum[m]) zz=k[++m],kk=k[--j],zk=0;
				else if(sum[m]>sum[j]) f=sum[m]-sum[j],kk=k[--j],zk=0; 
				else f=sum[j]-sum[m],zz=k[++m],zk=1;
			}
			else{
				if(zk==0){
					if(f>sum[j]) f-=sum[j],kk=k[--j];
					else if(f==sum[j]) f=0,kk=k[--j],zz=k[++m];
					else f=sum[j]-f,zk=1,zz=k[++m];
				}
				else{
					if(f>sum[m]) f-=sum[m],zz=k[++m];
					else if(f==sum[m])f=0,zk=0,kk=k[--j],zz=k[++m];
					else f=sum[m]-f,zk=0,kk=k[--j];
				}
			}
		} 
	}
	cout<<ans;
	return 0;
}
