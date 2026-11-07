#include <bits/stdc++.h>
using namespace std;

char xule[100000099];
int main(){
    freopen("/home/noi/noip/HE-J00929/string/string.in","r",stdin);
    freopen("/home/noi/noip/HE-J00929/string/string.out","w",stdout);
    long long n,ljq=0,lon=0,nums;
    char wt;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>nums>>wt;
        lon+=nums;
        for(int j = ljq;j<ljq+nums;j++){
            xule[j] = wt;
        }
        ljq+=nums;
    }
    int cag=0;
    for(int i = 0;i<lon/2;i++){
        if(xule[i]!=xule[lon-i-1])
		cag++;
    }
    cout<<cag;
    return 0;
}
