#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    vector< pair<long long,char> > a;
    int n;
    cin >> n;
    a.resize(n);
    for(int i = 0;i<n;i++){
        pair<long long,char> t;
        cin >> t.first >> t.second;
        a[i] = t;
    }
    int l = 0,r = n-1;
    unsigned long long sum = 0;
    while(l<r){
        if(a[l].first>a[r].first){
            if(a[l].second==a[r].second){
                a[l].first -= a[r].first;
                a[r].first = 0;
            }else{
                a[l].first -= a[r].first;
                sum += a[r].first;
                a[r].first = 0;
            }
            r--;
        }else if(a[l].first<a[r].first){
            if(a[l].second==a[r].second){
                a[r].first -= a[l].first;
                a[l].first = 0;
            }else{
                a[r].first -= a[l].first;
                sum += a[l].first;
                a[l].first = 0;
            }
            l++;
        }else{
            if(a[l].second==a[r].second){
                a[l].first = 0;
                a[r].first = 0;
            }else{
                sum += a[r].first;
                a[r].first = 0;
                a[l].first = 0;
            }
            l++;
            r--;
        }
    }
    cout << sum;
    return 0;
}
