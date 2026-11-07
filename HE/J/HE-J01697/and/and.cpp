#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,m,ma=-10;
cin>>n>>m;
int a[n]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
            int sum=a[i];
            int ci=n/m;
            int j=i+1;
        while(ci){
                int c1=m;
            while(c1){
                sum=sum&a[j];
                ma=max(ma,sum);
                j++;
                c1--;
            }
            ci--;
        }
    }
    cout<<ma;
 fclose(stdin);
 fclose(stdout);
    return 0
}
