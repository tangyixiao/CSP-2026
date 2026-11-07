#include <iostream>
using namespace std;
int check[35],m,a[35]={0},k[200005],n,s=-1,z,ans=0;
bool b[200005][35];
int main(){
    freopen("and.in","r",stdin);
    freopen("ans.out","w",stdout);
    check[0]=1;
    for(int i=1;i<=30;i++)check[i]=2*check[i-1];
    //greedy,O(70*m)=>O(m)
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>k[i];
        z=k[i];
        for(int j=30;j>=0;j--){
            if(z>=check[j]){
                z-=check[j];
                b[i][j]=1;
                a[j]++;
            }else{
                b[i][j]=0;
            }
        }
    }
    for(int i=30;i>=0;i--){
        if(a[i]>=m){
            s=i;
            break;
        }
    }
    if(s<0){
        cout<<0<<endl;//no possible equalations
        return 0;
    }
    ans+=check[s];
    for(int i=1;i<=n;i++){
        if(b[i][s]!=1){
            k[i]=0;
        }//mark
    }
    for(int i=s-1;i>=0;i--){
        a[i]=0;
        for(int j=1;j<=n;j++){
            if(k[j]!=0&&b[j][i]){
                a[i]++;
            }
        }
        if(a[i]>=m){
            ans+=check[i];
            //mark
            for(int j=1;j<=n;j++){
                if(b[j][i]!=1){
                    k[j]=0;
                }
            }
        }
    }
    cout<<ans<<endl;
    fclose(stdout);
    fclose(stdin);
    return 0;
}
