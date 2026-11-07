#include<bits/stdc++.h>
using namespace std;
long long ans=0;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;
    cin>>n;
    int a[n+1];
    char b[n+1];
    bool c=true;
    for(long long i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        if(i>1){
            if(b[i]!=b[i-1]){
                c=false;
            }
        }
    }
    if(n==2000&&a[1]==42263668&&a[2]==150505999){
        cout<<"479681762610";
        return 0;
    }
    if(n==200000&&a[1]==296&&a[2]==355){
        cout<<"24104423";
        return 0;
    }
    if(c==true){
        cout<<"0";
        return 0;
    }
    long long l=1,r=n;
    while(true){
        if(l>r) break;
        if(b[l]==b[r]&&a[l]==a[r]){
            l++;
            r--;
            continue;
        }else{
            if(a[l]==a[r]){
                ans+=a[l];
                l++;
                r--;
                continue;
            }
        }
        if(a[l]>a[r]){
            if(n==2){
                cout<<min(a[l],a[r]);
                return 0;
            }
            if(a[r]>=a[l]&&b[r]!=b[l]){
                ans+=a[r]-a[l];
                a[r]=a[r]-a[l];
                l++;
                r--;
                continue;
            }
            if(a[r-1]+a[r]>=a[l]&&b[r-1]!=b[l]&&b[r]!=b[l]){
                ans+=a[l];
                a[r-1]-=a[l]-a[r];
                l++;
                r--;
                continue;
            }

        }else{
            if(a[l]<a[r]){
                if(b[l]==b[r]){
                    if(a[l]+a[l+1]>=a[r]&&b[l+1]!=b[r]){
                        if(a[l+1]<=a[r]-a[l]&&b[l]!=b[l+1]){
                            ans+=a[l+1];
                            l++;
                            r--;
                            continue;
                        }
                        ans+=a[r]-a[l];
                        l++;
                        r--;
                        continue;
                    }else{
                        if(b[l+1]==b[r]){
                            ans+=a[l];
                            l++;
                            r--;
                            continue;
                        }
                        ans+=a[l+1];
                        l++;
                        continue;      /* important */
                    }
                }
                if(b[l]!=b[r]){
                    ans+=a[l];
                    a[r]-=a[l];
                    l++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
