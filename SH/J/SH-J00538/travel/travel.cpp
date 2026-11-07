#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    string c1,s1,c2,s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
        cout<<"1";
        if(s1=="01A"&&s2=="01B"||s1=="01c"&&s2=="01B"||s1=="01D"&&s2=="01F"||s1=="02A"&&s2=="02B"){
			cout<<"111";
        }
        if(s1=="01C"&&s2=="01A"||s1=="02C"&&s2=="02A"||s1=="03C"&&s2=="03A"||s1=="04C"&&s2=="04A"){
		     cout<<"110";
	    }else{
		    cout<<"100";
	    }
    }	
    else{
        cout<<"0000";
    }
    return 0;
}
