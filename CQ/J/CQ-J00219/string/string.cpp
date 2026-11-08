#include<bits/stdc++.h>
using namespace std;
const int N=2e5;
int n;
struct node{
	long long a;
	char c;
}AC[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>AC[i].a>>AC[i].c;
	}
	for(int i=0,j=n-1;i<=j;){
//		cout<<"i:"<<i<<"  j:"<<j<<"  AC[i].a:"<<AC[i].a<<"  AC[j].a:"<<AC[j].a<<"  ans:"<<ans<<"\n"; 
		if(AC[i].c!=AC[j].c){
			ans+=min(AC[i].a,AC[j].a);		
		}
		if(AC[i].a>AC[j].a){
			AC[i].a-=AC[j].a;
			j--;
		}
		else if(AC[i].a<AC[j].a){
			AC[j].a-=AC[i].a;
			i++;
		}
		else if(AC[i].a==AC[j].a){
			AC[i].a=0;
			AC[j].a=0;
			j--;
			i++;
		}
	}
	cout<<ans;
	/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
	*/ 
	return 0;
}
 
