#include<bits/stdc++.h>
using namespace std;
int n,m,mx=0;
int a[200001],b[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin >>n >>m;
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j]==b[i-1])a[j]=0;
            if(mx<a[j])mx=a[j];
        }
        b[i]=mx;
    }
    for(int i=0;i<m;i++){
        b[i+1]=b[i]&b[i+1];
    }
    cout << b[m-1];
    return 0;
    fclose(stdin);
    fclose(stdout);
}
