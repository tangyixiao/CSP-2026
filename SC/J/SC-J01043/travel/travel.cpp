#include<bits/stdc++.h>
using namespace std;
char a[3],b[4],c[4],d[3];
bool f=0;
int main()
{
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout);
	cin>>a>>b>>d>>c;
	for(int i=0;i<=1;i++){
	    if(a[i]==d[i]);
	    {
		    f=1;
		
	    }
	
	}
	if(!f){
	   cout<<"0000";
	   return 0;	
	}
	cout<<f;
	f=0;
	for(int i=0;i<=1;i++){
	   if(b[i]==c[i]);
	   f=1;
    }
    if(f)
     {
        if(b[2]<='C'&&c[2]<='C'||b[2]>='D'&&c[2]>='D'){
            if(abs(b[2]-c[2])==1){
	      	    cout<<"111";
		    }
	        else
	        cout<<"110";
	   }
	    else
	       cout<<"100"   ;  
     }
    else
       cout<<"000";
	
	return 0;
}