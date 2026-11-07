#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5,A=35;
bool flag=false,rt=false;
long long n,m,i,j,ad,a[N];
long long b[N][A],c,t,yu,res[N],tot,ans;
int main(){
 freopen("and.in","r",stdin);
 freopen("and.out","w",stdout);
 cin>>n>>m;
 for(i=1;i<=n;i++)cin>>a[i];
 for(i=1;i<=n;i++)res[i]=1;
 for(i=1;i<=n;i++){
  c=a[i];
  t=0;
  while(c>=1){
   t++;
   b[i][t]=c%2;
   c/=2;
  }
 }
 ad=1;
 for(i=1;i<=30;i++)ad*=2;
 for(i=30;i>=1;i--){
  yu=0;
  ad/=2;
  for(j=1;j<=n;j++){
   if(b[j][i]==1)yu++;
  }
  if(yu==0&&flag==false)continue;
  else flag=true;
  tot=0;
  for(j=1;j<=n;j++){
   if(res[j]==1){
   	if(b[j][i]==0){
   	 res[j]=0;
	}else{
	 tot++;
	}
   }
  }
  if(tot<m&&rt==false){
   for(j=1;j<=n;j++)res[j]=1;
  }
  if(tot>=m){
   ans+=ad;
   rt=true;
  }
 }
 cout<<ans;
 return 0;
}
