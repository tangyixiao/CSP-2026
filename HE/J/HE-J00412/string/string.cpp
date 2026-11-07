#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,s;
    long long bt=0;
    string h,z,z1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s>>h;
        for(int i=1;i<=s;i++){
            z+=h;
        }
    }
    for(int i=z.size()-1;i>=0;i--){
        z1+=z[i];
    }
    if(z1==z)cout<<"0";
    else{
	for(int i=0;i<z.size();i++){
    	if(z1[i]!=z[i])bt++;}
	}
	cout<<bt/2;
	

    return 0;
}
