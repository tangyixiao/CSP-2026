#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,i,l,j,a[N],sum,ans;
char c[N],d[N];
int main(){
 freopen("string.in","r",stdin);
 freopen("string.out","w",stdout);
 cin>>n;
 for(i=1;i<=n;i++)cin>>a[i]>>c[i];
 for(i=1;i<=n;i++)sum+=a[i];
 l=1;
 for(i=1;i<=n;i++){
  j=l+a[i];
  while(l<j){
   d[l]=c[i];
   l++;
  }
 }
  for(i=1;i<=sum/2;i++){
   if(d[i]!=d[sum-i+1])ans++;
  }
 cout<<ans;
 return 0;
}
