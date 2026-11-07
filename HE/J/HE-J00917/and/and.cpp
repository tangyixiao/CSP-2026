# include <bits/stdc++.h>
using namespace std ;
int n , ans , m , n_ ,q , m_ , sum1[200005],sum2[200005];
bool flaga , flagb ;
struct z {
    int val ;
    int p ;
}a[200005];
bool cmp(z x , z y){
    return x.val>y.val ;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    flaga = true ;
    flagb = true ;
    cin >> n >>m ;
    n_=n;
    while(n_>1){
        if(n_%2==1){
            flagb=false;
            break;
        }
        n_/=2;
    }
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i].val ;
        if (a[i].val!=i-1){
            flagb=false;
        }
        n_=a[i].val;
        n_++;
        sum1[1]=a[1].val;
        sum1[i]=a[i].val&sum1[i-1];
        while (n_>1&&flaga){
        if(n_%2==1){
            flaga=false;
            break ;
        }
        n_/=2;
        }

    }
    sum2[n]=a[n].val;
    for (int i = n-1 ; i >= 1 ; i--){
        sum2[i]=a[i].val &sum2[i+1];
    }
    if(m==1){
        sort(a+1,a+n+1,cmp);
        cout << a[1].val ;
    }
    if(flaga){
        sort(a+1,a+n+1,cmp);
        cout << a[m].val ;
        return 0 ;
    }
    if(m==n){
        ans = a[1].val ;
        for (int i = 1 ; i <= n ; i++){
            ans=(ans&a[i].val);
        }
        cout << ans ;
        return 0 ;
    }
    if(n<=2000&&m==2){
        for (int i = 1 ; i <= n ; i++){
            for (int j = i+1 ; j <= n ; j++){
                q = a[i].val&a[j].val ;
                ans=max(ans,q);
            }
        }
        cout << ans ;
        return 0 ;
    }
    if(flagb){
        m_=1;
        while(1){
            m_*=2;
            if(m_>=m){
                break ;
            }
        }
        cout << n-m_;
        return 0 ;
    }
    if (m==n-1){
        ans=max(sum2[2],sum1[n-1]);
        for (int i = 2 ; i <= n-1;i++){
            q=(sum1[i-1]&sum2[i+1]);
            ans=max(ans,q);
        }
        cout << ans ;
        return 0 ;
    }
}
