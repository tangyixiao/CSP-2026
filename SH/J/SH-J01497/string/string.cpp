#include<iostream>
#include<cstring>
using namespace std;
const int maxn=200005;
#define int long long
int a[maxn];char c[maxn];
int s1[maxn],s2[maxn];//[s1[i],s2[i]]ÖÐ×Ö·ûÎªc[i]
int r_s1[maxn],r_s2[maxn];
int n;
char findch(int x){
	return c[lower_bound(s2,s2+n,x)-s2];
} 
char findchr(int x){
	return c[n+1-(lower_bound(r_s2,r_s2+n,x)-r_s2)];
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s1[0]=0;
	s2[0]=0;
	s1[1]=1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s2[i]=a[i]+s2[i-1];
		s1[i+1]=s2[i]+1;
	}
	for(int i=1;i<=n;i++){
		r_s2[i]=s2[n]+1-s1[n+1-i];
		r_s1[i]=s2[n]+1-s2[n+1-i];
	}
	int length=s2[n];
	//for(int i=1;i<=n;i++)cout<<r_s1[i]<<' '<<r_s2[i]<<'\n';
	int cnt=0;
	int merge1[2*n+1],merge2[2*n+1];
	merge1[0]=merge2[0]=0;
	int tmp1=1,tmp2=1,tmp=1;
	while(tmp1!=n||tmp2!=n){
		if(s1[tmp1]>r_s2[tmp2]){
			tmp2++;
			continue;
		}
		if(s2[tmp1]<r_s1[tmp2]){
			tmp1++;
			continue;
		}
		if(s1[tmp1]==r_s1[tmp2]){
			merge1[tmp]=s1[tmp1];
			if(s2[tmp1]>r_s2[tmp2]){
				merge2[tmp]=r_s2[tmp2];
				tmp2++;
				tmp++;
				continue;
			}
			if(s2[tmp1]<r_s2[tmp2]){
				merge2[tmp]=s2[tmp1];
				tmp1++;
				tmp++;
				continue;
			}
			if(s2[tmp1]==r_s2[tmp2]){
				merge2[tmp]=s2[tmp1];
				tmp1++;
				tmp2++;
				tmp++;
				continue;
			}
		}
		if(s1[tmp1]<r_s1[tmp2]){
			merge1[tmp]=r_s1[tmp2];
			if(s2[tmp1]>r_s2[tmp2]){
				merge2[tmp]=r_s2[tmp2];
				tmp2++;
				tmp++;
				continue;
			}
			if(s2[tmp1]<r_s2[tmp2]){
				merge2[tmp]=s2[tmp1];
				tmp1++;
				tmp++;
				continue;
			}
			if(s2[tmp1]==r_s2[tmp2]){
				merge2[tmp]=s2[tmp1];
				tmp1++;
				tmp2++;
				tmp++;
				continue;
			}
		}
		if(s1[tmp1]>r_s1[tmp2]){
			merge1[tmp]=s1[tmp1];
			if(s2[tmp1]>r_s2[tmp2]){
				merge2[tmp]=r_s2[tmp2];
				tmp2++;
				tmp++;
				continue;
			}
			if(s2[tmp1]<r_s2[tmp2]){
				merge2[tmp]=s2[tmp1];
				tmp1++;
				tmp++;
				continue;
			}
			if(s2[tmp1]==r_s2[tmp2]){
				merge2[tmp]=s2[tmp1];
				tmp1++;
				tmp2++;
				tmp++;
				continue;
			}
		}
	}
	merge1[tmp]=merge2[tmp-1]+1;
	merge2[tmp]=length;
	//for(int i=1;i<=tmp;i++)cout<<merge1[i]<<' '<<merge2[i]<<'\n';
	for(int i=0;i<=tmp;i++){
		if(findch(merge1[i])!=findchr(merge1[i]))cnt+=(merge2[i]-merge1[i]+1);
	} 
	//if(length%2==1)cnt--;
	cout<<cnt/2;
	return 0;
} 
