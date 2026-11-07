#include <bits/stdc++.h>
using namespace std;
int fid(int a[],int cnt,int k){
    for(int i=1;i<=cnt;i++){
        if(a[i]==k){
            return i;
        }
    }
    return 0;
}
int m,n,cnt,cnt1;
int dachu[300003],a[500005];
void co(int n,int dachu[],int a[],int cnt1){

    int lins=1;
    for(int i=cnt1;i<=n;i++){
            if(fid(dachu,i-1,a[i])!=0){
                for(int j=fid(dachu,i-1,a[i])+1;j<=i;j++){
                    dachu[j]=0;
                }
                lins=fid(dachu,i-1,a[i]);
            }
        dachu[lins]=a[i];
        lins++;
    }

}

int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    cin>>n>>m;
    vector<int> ans(m);

    cnt1=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        co(n,dachu,a,cnt1);
        cnt1++;
        for(int j=1;j<=n;j++){
            ans[dachu[j]]++;

            dachu[j]=0;
        }

    }


   for(int i=1;i<=m;i++){
    cout<<ans[i]<<' ';
   }
	return 0;
}

