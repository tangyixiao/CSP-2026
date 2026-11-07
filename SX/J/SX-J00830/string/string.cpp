#include<bits/stdc++.h>
#define MAXN 200010
#define il inline
#define re register
#define ll long long
using namespace std;
struct S{
	char c;
	ll num;
}a[MAXN];
ll n,m,mid,ans=0,cnt=0,l,r,b=0;
string s;
char op;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>m>>op;
		a[i].num=m;
		a[i].c=op;


		cnt+=m;
	}
    mid=cnt/2;
	int l=0,r=n-1;
	for(ll i=0;i<mid;){
        if(i+a[l].num>mid){
            a[l].num-=(mid-i);
            if(a[l].c!=a[r].c){
                ans+=a[r].num;
            }

        }
		if(a[l].num==a[r].num){
			if(a[l].c!=a[r].c){
				ans+=a[l].num;

			}
			l++;
			r--;
			i+=a[l].num;
		}
		else if(a[l].num<a[r].num){
			if(a[l].c!=a[r].c){
				ans+=a[l].num;
			}

			a[r].num-=a[l].num;

			i+=a[l].num;
			l++;
		}
		else{
			if(a[l].c!=a[r].c){
				ans+=a[r].num;
			}

			a[l].num-=a[r].num;

			i+=a[r].num;
			r--;
		}

	}

	cout<<ans;
}
