#include<bits/stdc++.h>
#include<set>

using namespace std;

int main()
{
      int n,rem,total=0,rcount=0,setc;
      set<int >ss;
      cin>>n;
      while(n !=0){

      rem= n%10;
       n=n/10;
      rcount++;

      ss.insert(rem);

      }
      setc=ss.size();
      /*  if( setc==1){
        cout<<setc;
      }
      else{
            if(rcount>setc){
                total = abs(rcount-setc);
            }
            cout<<total<<endl;


      }*/
      cout<<setc<<" " <<rcount;


     // for(set<int>::iterator it=ss.begin();it != ss.end();it++){
     //   cout<<*it<<endl;
    //  }





}
