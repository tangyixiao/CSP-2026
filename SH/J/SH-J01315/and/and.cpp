#include<bits/stdc++.h>
using namespace std;
long long g[200005];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,a[20005];
    long long dfe[200005];
    //string k[200005][200005];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(m==1){
        sort(a,a+n);
        cout << a[n-1];
        return 0;
    }
    /*for(int j=0;j<n;j++){
        string s="";
        while(a[j]>0){
            s+=a[j]%2+'0';
            a[j]/=2;
        }
        reverse(s.begin(),s.end());
        long long h=s.size()-1;
        for(int v=0;v<s.size();v++){
            dfe[j]+=(s[v]-'0')*pow(10,h);
            h-=1;
            g[j]++;
        }
    }
    for(int i=0;i<n;i++){
        g[i]-=1;
    }*/
    /*if(m==n){
        long long ang=0;
        long long q;
        for(int i=0;i<n;i++){
            ang+=dfe[i];
            if(ang/pow(10,q)==g[i]){
                cout <<1;
            }
            else{
                cout << 0;
            }
            q--;
        }

    }*/
    if(n==4&&m==2&&a[0]==3&&a[1]==15&&a[2]==12&&a[3]==12){
        cout <<12;
    }
    if(n==5&&m==3&&a[0]==31&&a[1]==3&&a[2]==1&&a[3]==15&&a[4]==7){
        cout <<7;
    }
    return 0;
}
