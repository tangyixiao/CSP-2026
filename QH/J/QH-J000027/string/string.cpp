#include<bits/stdc++.h>
using namespace std;
struct t{
	long long s;
	char z;
}a[200010];
int n,j,i;
long long g=0;
void hws(long long w,long long y,char d,char b){
	if(i>j||i==j) return ;
	if(b!=d){
			if(y==w) {
				j--;
				i++;
				g+=y;
				hws(a[j].s,a[i].s,a[j].z,a[i].z);
				return ;
			}
			else if(y>w){
				g+=w;
				j--;
				y=y-w;
				hws(a[j].s,y,a[j].z,b);
				return ;
			}
			else if(y<w){
				g+=y;
				i++;
				w=w-y;
				hws(w,a[i].s,d,a[i].z);
				return ;
			}
	}
	else{
		if(y==w) {
			j--;
			i++;
			hws(a[j].s,a[i].s,a[j].z,a[i].z);
			return ;
		}
		if(y>w){
			j--;
			y=y-w;
			hws(a[j].s,y,a[j].z,b);
			return ;
		}
		else if(y<w){
			i++;
			w=w-y;
			hws(w,a[i].s,d,a[i].z);
			return ;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i1=1;i1<=n;i1++){
		scanf("%lld",&a[i1].s);
		getchar();
		scanf("%c",&a[i1].z);
	} 
	j=n;
	i=1;
	hws(a[j].s,a[i].s,a[j].z,a[i].z);
	printf("%lld",g);
	return 0;
} 
