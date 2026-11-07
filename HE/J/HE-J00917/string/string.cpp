# include<bits/stdc++.h>
using namespace std ;
long long n , ans , m ;
string s ;
struct x {
    char c ;
    long long l ;
}a[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout) ;
    cin >> n ;
    if(n==1){
        cout << 0 ;
        return 0 ;
    }
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i].l >> a[i].c;
        m+=a[i].l ;
    }
    if(m<=5500){
        s+= '0' ;
        for (int i = 1 ; i <= n ; i++){
            for(int j = 1 ;j <= a[i].l ; j++){
                s+=a[i].c ;
            }
        }
        for (int i = 1 ; i <= (m/2) ; i++){
            if(s[i]!=s[m-i+1]){
                ans++;
            }
        }
        cout << ans ;
        return 0 ;
    }

}
