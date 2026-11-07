#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string tods(string s1){
	string s2;
	for(int i=s1.length()-1;i>=0;i--){
        s2+=s1[i];
	}
	return s2;

}
bool judgeds(string s1){
    string s2;
    s2=tods(s1);
    if(s1==s2){
        return 1;
    }
    else return 0;
}
string s1,s2;
long long n,a,ans,l[10005],lz;
char c;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a>>c;
        for(long long i=1;i<=a;i++){
            s1+=c;
        }
    }
    for(long long i=0;i<s1.length();i++){
        s2=tods(s1);
        if(judgeds(s1)){
            cout<<ans;
            break;
        }
        else {
            s1[i]=s2[i];
            ans++;
        }
    }

	return 0;
}

