#include<bits/stdc++.h>
using namespace std;
int n,m,a[10005],w[10005],c[10005],maxn = 0, cunt = 0;
void f(int step){
    if(step>n){
        int cnt = 0,tmp = 0;
        for(int i = 1;i<=n;i++){
            if(w[i] == 1){
                cnt += 1;
            }
        }
        
        if(cnt==m)
            {
                for(int i = 1;i<= n;i++)
                    {
                    if(w[i] == 1 && tmp != 0)
                        {
                        
                        tmp = andd(wei(tmp),wei(a[i]));
                    }
                    else if(w[i] == 1&&tmp == 0)
                        {
                        tmp = a[i];
                    }
                }

        }
        if(maxn<tmp){
            maxn = tmp;
        }
        else if(maxn==tmp){
            cunt+=1;
        }
    }
    for(int i = 0;i<=1;i++){
        w[step] = i;
        f(step+1);
    }
}
int wei(int c)
{
    int tmp = 0,cnt = 1;
    while(c > 0)
        {
        tmp += (c % 2)*cnt;
        cnt*=10;
        c = c / 2;
    }
    return tmp;
}
int andd(int a ,int b){
    int cnt = 0,wei1=0,fl = 0,tmp = 0;
    int p = min(a,b),cc;
	while(p--){
		cc+=1;
	}
    for(int i = 1;i<=cc;i++){
        if(a%10==b%10){
            cnt+=1;
            for(int i = 0;i<=wei1;i++){
                tmp += tmp*2;
            }
            if(wei1==0){
                fl+1;
            }
            wei1+=1;
            a/=10;
            b/=10;
        }
    }
    return fl;
}
int main(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++) cin>>a[i];
    f(1);
    cout<<cunt;

}
