#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2e+5;
struct p{
	ll a;
	char b;
};
p t[N+10];

ll cnt=0;
void check(int &i,int &j){
	if(t[i].b!=t[j].b){
		if(t[i].a>t[j].a){
			t[i].a-=t[j].a;
			cnt+=t[j].a;
			j--;
		}
		else if(t[i].a<t[j].a){
			t[j].a-=t[i].a;
			cnt+=t[i].a;
			i++;
		}
		else{
			cnt+=t[i].a;
			i++;	j--;
		}
	}else{
		if(t[i].a>t[j].a){
			t[i].a-=t[j].a;
			j--;
		}
		else if(t[i].a<t[j].a){
			t[j].a-=t[i].a;
			i++;
		}
		else{
			i++;	j--;
		}
	}
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;	cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
		cin>>t[i].a>>t[i].b;
		sum+=t[i].a;
	}
	
	int i=1,j=n;	
	while(i<j){
		check(i,j);
	}
	
	cout<<cnt;

 	return 0;
}
