#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("and.in","r",stdin);
    freopen("and.out","r",stdout);
    long long n,c,a[10005],b=-1;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(c==2){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b<=a[i] and a[j]){
                b=a[i] and a[j];
            }
        }
    }
    cout<<b;
    }
   fclose(stdin);
    fclose(stdout);
	return 0;
}
