#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int n;
int m1,m2;
int a[N],s[N];
char c[N],c1[N],c2[N];
int a1[N],a2[N];
int siz1[N],siz2[N];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    int sum = 0;
    for(int i = 1; i<=n; i++) {
        cin>>a[i]>>c[i];
        s[i] = s[i-1]+a[i];
        sum+=a[i];
    }
    int t1,s1,t2,s2;
    int f = sum&1;
    sum/=2;
    int now = 0;
    for(int i = 1; i<=n; i++) {
        if(now+a[i]>=sum) {
            t1 = i;
            s1 = sum-s[i-1];
            t2 = t1;
            s2 = s1+1+f;
            if(s2>a[i]) {
                t2++;
                s2-=a[i];
                if(s2>a[i+1]) {
                    t2++;
                    s2 = 1;
                }
            }
            m1 = t1-1;
            m2 = n-t2;
            for(int j = t2+1; j<=n; j++) {
                a2[j-t2] = a[j];
                c2[j-t2] = c[j];
            }
            a1[0] = s1;
            c1[0] = c[t1];
            a2[0] = a[t2]-s2+1;
            c2[0] = c[t2];
            break;
        } else {
            a1[i] = a[i];
            c1[i] = c[i];
            now+=a[i];
        }
    }
    reverse(a1+1,a1+1+m1);
    reverse(c1+1,c1+1+m1);
    for(int i = 0; i<=m1; i++) {
        siz1[i] = siz1[i-1]+a1[i];
//		cout<<a1[i]<<c1[i]<<' ';
    }
    for(int i = 0; i<=m2; i++) {
        siz2[i] = siz2[i-1]+a2[i];
//		cout<<a2[i]<<c2[i]<<' ';
    }
    int ans = sum,tl1 = 0,tl2 = 0,nw = 0;
    while(1) {
        if(siz1[tl1]<siz2[tl2]) {
            if(c1[tl1]==c2[tl2]) {
                ans-=siz1[tl1]-nw;
            }
            nw = siz1[tl1++];
        } else if(siz2[tl2]<siz1[tl1]) {
            if(c1[tl1]==c2[tl2]) {
                ans-=siz2[tl2]-nw;
            }
            nw = siz2[tl2++];
        } else {
            if(c1[tl1]==c2[tl2]) {
                ans-=siz2[tl2]-nw;
            }
            nw = siz2[tl2++];
            tl1++;
        }
        if(tl1>=m1&&tl2>=m2){
        	break;
		}
    }
    cout<<ans<<endl;
    return 0;
}
/*
5
2 w
4 r
1 d
4 g
2 x

4
2 w 4 e 6 d 2 b
*/