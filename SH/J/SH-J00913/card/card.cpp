#include<bits/stdc++.h>
using namespace std;
const int N=5005,A=3005;
int n,m,i,j,k,tmp,a[N],b[N],pl[A],cnt[A],ans[A];
int main(){
 freopen("card.in","r",stdin);
 freopen("card.out","w",stdout);
 cin>>n>>m;
 for(i=1;i<=n;i++)cin>>a[i];
 for(i=1;i<=n;i++){
  tmp=0;
  for(j=1;j<=m;j++)cnt[j]=0;
  for(j=i;j<=n;j++){
   tmp++;
   cnt[a[j]]++;
   if(cnt[a[j]]==2){
    int tp=tmp;
    for(k=pl[a[j]];k<tp;k++){
     cnt[b[k]]--;
     tmp--;
	}
   }
   b[tmp]=a[j];
   pl[a[j]]=tmp;
  }
  for(j=1;j<=tmp;j++)ans[b[j]]++;
 }
 for(j=1;j<=m;j++)cout<<ans[j]<<" ";
 return 0;
}
