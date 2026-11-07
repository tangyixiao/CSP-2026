#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("card.in","r",stdin);
    freopen("card.out","r",stdout);
   int n,m,a[ 500005],c[300005]={0};
   cin>>n>>m;
   string b;
   for(int i=0;i<n;i++){
        cin>>a[i];
   }
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
            int f=0;
        for(int z=i;z<=j;z++){
            if(b[z]==a[j]){
                b.clear();
                b+=a[j];
                f=1;
                break;
            }
        }
        if(!f){
            b+=a[j];
        }
    }
    for(int j=0;j<b.size();j++){
        if(b[i]==1){
            c[0]++;
        }else if(b[i]==2){
            c[1]++;
        }else if(b[i]==3){
            c[2]++;
        }else {
            c[3]++;
        }
    }
   }
   cout<<c[0]<<' '<<c[1]<<' '<<c[2]<<' '<<c[3];
    fclose(stdin);
   fclose(stdout);
	return 0;
}
