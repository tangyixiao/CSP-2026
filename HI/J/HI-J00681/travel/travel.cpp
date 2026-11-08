#include<bits/stdc++.h>

using namespace std;
int main(){
    	freopen("travel.in","r",stdin);
    	freopen("travel.out","w",stdout);
	string a,b,c,d,s,n;
	int h,m;
	cin>>a>>b>>c>>d; 
    if(a==c){
    	cout<<1;
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	for(int i=0;i<b.size();i++){
		if(b[i]>='1'&&b[i]<='9'){
			s+=b[i];
		}
}
			for(int i=0;i<d.size();i++){
		if(d[i]>='1'&&d[i]<='9' ){
			n+=d[i];
		}
	}
	if(s==n){
		cout<<1;
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
    for(int i=0;i<b.size();i++){
    	if(b[i]>='A'&&b[i]<='F'){
    		h=b[i];
		}
	}
	for(int j=0;j<d.size();j++){
		if(d[j]>='A'&&d[j]<='F'){
			m=d[j];
		}
	}
	if(h!=70&&h!=68&&m!=70&&m!=68){
		 if(h+3<m||m+3<h){
    	cout<<0;
	}
	else{
		cout<<1;
	}
	if(h+1==m||m+1==h){
		cout<<1;
	}
	else{
		cout<<0;
	}
}
    if(h==70||m==70){
    	if(h-2>m||m-2>h){
    		cout<<0;
    		cout<<0;
		}
		else{
			cout<<11;
		}
	}
	if(h==68||m==68){
    	if(h-1>=m||m-1>=h){
    		cout<<0;
    		cout<<0;
		}
		else{
			cout<<11;
		}
	}
	return 0;
}
