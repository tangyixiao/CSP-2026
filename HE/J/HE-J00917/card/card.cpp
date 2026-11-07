# include<bits/stdc++.h>
using namespace std ;
int n , a[500005] , ans[300005] , x[300010] , m , p ,b[300005] ;
int main(){
    freopen("card.in","r",stdin) ;
    freopen("card.out","w",stdout) ;
    cin >> n >>m ;
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
        if(a[i]=a[i-1]&&n>=5000){
            i--;
            n--;
        }
    }
    for (int i = 1 ; i <= n ; i++){
        for (int j= 1 ; j <= m ; j++){
            b[j]=0;
        }
        p=0;
        for (int j = i ; j <= n ; j++){
            p=p+1;

            if(b[a[j]]!=0){
                p=b[a[j]] ;
            }
            b[a[j]]=p;

        }
        for (int j = 1 ; j <= m ; j++){
            if(b[j]!=0&&b[j]<=p){
                ans[b[j]]++;
            }
        }
    }
    for (int i = 1 ; i <= m ; i++){
        cout << ans[i]<< " " ;
    }
    return 0 ;
}
