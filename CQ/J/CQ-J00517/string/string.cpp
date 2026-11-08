#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,a[200001],len=0;
char c[200001];
int main(){
    ios::sync_with_stdio(0),cin.tie(nullptr),cout.tie(nullptr);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> c[i];
        len+=a[i];
    }
    long long r=n,num_r=a[n],num_l=a[1],l=1;
    for(long long i=0;i<(len)/2;){
        if(num_l!=0&&num_r!=0){
            long long tmp = min(num_r,num_l);
            i+=tmp;
            num_l-=tmp;
            num_r-=tmp;
            if(c[l]!=c[r]){
                ans+=tmp;
                //cout <<tmp <<" " << i <<" ";
            }
        }
        else{
            num_l-=1;
            num_r-=1;
            if(num_r<0&&r>1){
                num_r=a[r-1]-1;
                r--;
            }
            if(num_l<0&&l<n){
                num_l=a[l+1]-1;
                l++;
            }
            if(c[l]!=c[r]){
                ans+=1;
            }
            i++;
        }
    }
    cout << ans << "\n";
    return 0;
}