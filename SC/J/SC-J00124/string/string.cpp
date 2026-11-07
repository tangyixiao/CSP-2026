#include<bits/stdc++.h>
using namespace std;
long long a[200005],x[200005],y[200005],n,l,k,b,ans;
char c[200005],xc[200005],yc[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        l+=a[i];
    }
    k=(l&1);
    l/=2;
    b=l;
    if(l==0){
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(l<=a[i]){
            x[1]=l;
            xc[1]=c[i];
            for(int j=i-1;j>=1;j--){
                x[i-j+1]=a[j];
                xc[i-j+1]=c[j];
            }
            while(a[i]<=l+k){
                l-=a[i];
                i++;
            }
            y[1]=a[i]-l-k;
            yc[1]=c[i];
            for(int j=i+1;j<=n;j++){
                y[j-i+1]=a[j];
                yc[j-i+1]=c[j];
            }
            break;
        }
        l-=a[i];
    }
    // for(int i=1;i<=n;i++){
    //     if(x[i])cout<<x[i]<<' '<<xc[i]<<' ';
    // }
    // cout<<'\n';
    // for(int i=1;i<=n;i++){
    //     if(y[i])cout<<y[i]<<' '<<yc[i]<<' ';
    // }
    // cout<<'\n';
    long long i=1,wi=0,j=1,wj=0;
    while(wi!=b||wj!=b){
        if(wi<=wj){
            if(xc[i]!=yc[j-1]){
                ans+=min(wj-wi,x[i]);
            }
            wi+=x[i];
            i++;
        }
        else{
            if(xc[i-1]!=yc[j]){
                ans+=min(wi-wj,y[j]);
            }
            wj+=y[j];
            j++;
        }
    }
    cout<<ans;
    return 0;
}