#include <bits/stdc++.h>
using namespace std;
long long sum;
struct Ch{
	long long a;
	char c;
}ch[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ch[i].a>>ch[i].c;
	}
	int i,j;
	if(n%2==0){
		i=n/2+1;
		j=n/2;
	}else{
		i=n/2+1;
		j=n/2;
	}
	for(;i<=n;i++){
		if(ch[i].c!=ch[j].c){
			if(ch[i].a>ch[j].a){
			    ch[j].c=ch[i].c;
			    sum+=ch[j].a;
		    }else{
		    	ch[i].c=ch[j].c;
		    	sum+=ch[i].a;
			}
		}
		if(i!=n/2+1 && ch[i].a!=ch[j].a){
			if(ch[i].a>ch[j].a){
			    ch[j].a=ch[i].a;
			    ch[j-1].a=ch[j-1].a-(ch[i].a-ch[j].a);
			    sum=sum+(ch[i].a-ch[j].a);
		    }else{
		    	ch[i].a=ch[j].a;
			    ch[i+1].a=ch[i+1].a-(ch[j].a-ch[i].a);
			    sum=sum+(ch[j].a-ch[i].a);
			}
		}
		j--;
	}
	cout<<sum;
	return 0;
}