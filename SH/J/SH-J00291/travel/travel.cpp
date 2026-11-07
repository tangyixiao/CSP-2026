#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    vector<int> ans(4,0);
    if(c1==c2) ans[0]=1;
    string numx=s1.substr(0,2),numr=s2.substr(0,2);
    if((numx==numr)&&ans[0]==1) ans[1]=1;
    char numxx=s1[2],numrr=s2[2];
    if(((numxx<='C'&&numrr<='C')||(numxx>='D'&&numrr>='D'))&&ans[1]==1) ans[2]=1;
    if((numxx+1==numrr||numrr+1==numxx)&&ans[2]==1) ans[3]=1;
    for(int i:ans) cout<<i;
    return 0;
}
