#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tc,ss,sss;
    cin>>tc;
    bool boo=false;
    for(int i=1;i<=5;i++){
    	cin>>ss;
    	  sss+=ss;
    }

    for(int i=0;i<=9;i++){
     if(i%2 ==0){
       if(sss[i]==tc[0]){
       	cout<<"YES"<<endl;
       	boo=true;
       	break;


    }

     }
     else{
     	if(tc[1]==sss[i]){
     		cout<<"YES\n";
     		boo=true;
     		break;
     	}

     }
   }
   if(boo==false){
   	cout<<"NO\n";
   }
}
