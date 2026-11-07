#include <iostream>
using namespace std;
struct zippedstring{
    long long fp,length;
    char c;
}zs[200005];
int n;
long long l,r,s,z,ans;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    zs[1].fp=1;
    for(int i=1;i<=n;i++){
        cin>>zs[i].length>>zs[i].c;
        zs[i+1].fp=zs[i].fp+zs[i].length;
    }
    l=1;
    r=n;
    z=zs[n+1].fp-1;
    while(l<r){
        s=min(zs[l].length,zs[r].length);
        if(zs[l].c!=zs[r].c)ans+=s;
        zs[l].fp+=s;
        zs[l].length-=s;
        zs[r].length-=s;
        if(zs[l].length==0)l++;
        if(zs[r].length==0)r--;
    }
    cout<<ans<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
