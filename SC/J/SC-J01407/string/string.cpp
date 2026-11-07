#include<bits/stdc++.h>
using namespace std;
struct stu{
	int a;
	char c;
};
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,st=1;
	long long ans=0;
	cin>>n;int sy=n;
	stu di[n+1];
	for(int i=1;i<=n;i++){
		cin>>di[i].a>>di[i].c;
		ans+=di[i].a;
	}
	long long sum=di[1].a,sun=di[n].a,w=0;
	for(long long i=1;i<=ans/2;){
		if(i>sum){
			st++;
			sum+=di[st].a;
		}//=min(di[st].a,di[sy].a)
		if(i>sun){
			sy--;
			sun+=di[sy].a;
		}
		int y=min(sun-i,sum-i);
		if(y>100){
			i+=y;
			
			if(di[st].c!=di[sy].c){
				w+=y;//min(di[st].a,di[sy].a);
			}
		}
		else{
			i++;
			if(di[st].c!=di[sy].c){
				w++;//min(di[st].a,di[sy].a);
			}
		}
		
		
		
	}
	cout<<w;
	
	return 0;
} 