#include<bits/stdc++.h>
using namespace std;
struct str{
    int num;
    char c;
}a[3000008];
int n;
int temp,temp1,tmp;
int l,r;
long long ans;
bool h;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].num>>a[i].c;
    }
    l=1,r=n;
    while(!h){
        if(a[l].num==a[l].num&&a[l].c==a[r].c){
            l++;
            r--;
        }else{
                    tmp=max(a[l].num,a[r].num);
                    if(a[l].num>a[r].num)
                    {
                        temp=r;
                        while(a[l].c==a[temp].c){

                                tmp=tmp-a[temp].num;
                                temp--;

                        }
                        if(a[l].c!=a[temp].c){
                        while(a[l].c!=a[temp].c){
                               a[temp].c=a[l].c;
                                temp--;
                            }
                        }
                    }else{
                        temp=l;
                        while(a[r].c==a[temp].c){

                            tmp=tmp-a[temp].num;
                            temp++;
                        }
                    if(a[l].c!=a[temp].c){
                        while(a[l].c!=a[temp].c){
                               a[temp].c=a[l].c;
                                temp--;

                            }
                        }
                    }
                l++;
                r--;
            }
            ans+=tmp;
        if(l>=r){
        h=true;
        }
        }
    cout<<ans;
    return 0;
}
