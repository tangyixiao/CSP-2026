#include<bits/stdc++.h>
using namespace std;
 struct node{
    	long long a;
    	long long b;
	};
	bool cmp(node a,node b){
		if(a.b>b.b){
			return true;
		}else if(a.a>b.a) {
			return true;
		}else{
			return false;
		}
	}
	
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    long long  n,m;
    cin>>n>>m;
    vector<node> s1(n);
   
    for(long long i=0;i<n;i++){
    	scanf("%lld",&s1[i].a);
    	long long sum=0;
    	long long y=s1[i].a;
    	for(long long  j=0;j<0x7ffff;j++){
    		if(y==0){
    			break;
			} 
				if(y%2!=0){
    			sum++;
			}
    		y=y>>1;
		}
		s1[i].b=sum;
	}
	
	sort(s1.begin(),s1.end(),cmp);
	// 0001 1111 ,1111,0111 
	long long  u=s1[0].a&s1[1].a;
	
	for(long long  i=2;i<m;i++){
		u&=s1[i].a;
		cout<<u;
	}
	cout<<u;
	return 0;
}
