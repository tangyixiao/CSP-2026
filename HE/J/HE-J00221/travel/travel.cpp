#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string a,ka,b,kb;
	bool f=0;
	cin>>a>>ka>>b>>kb;
	int p=a[0]-'0'*10+a[1]-'0';
	int q=b[0]-'0'*10+b[1]-'0';
	if(p!=q){
		cout<<"0000";
			fclose(stdin);
	        fclose(stdout);
	        return 0;
	}
	else
	 cout<<"1";
	if(!f){
    	int m=ka[0]-'0'*10+ka[1]-'0';
    	int n=kb[0]-'0'*10+kb[1]-'0';
    	if(m!=n){
    		f=1;
    		cout<<"000";
    			fclose(stdin);
	            fclose(stdout);
	            return 0;
		}
		else
		 cout<<"1";
	}
	int x=ka[2];
	int y=kb[2];
	if(!f){
		if((x<='C'&&y<='C')||(x>='D'&&y>='D')){
			cout<<"1";
		}
		else{
			cout<<"00";
				fclose(stdin);
	            fclose(stdout);
	            return 0;
		}
	}
	if(!f){
		if(abs(x-y)<=1)
		cout<<"1";
		else
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
