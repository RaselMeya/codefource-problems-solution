#include <bits/stdc++.h>
using namespace std;

int main()
{

     int n,k,i=1,num;;
     cin>>n>>k;
     int tt=INFINITY;
     while(i != tt){
     	num=n*i;
     	if(num%10==0 || num % 10 == k) break;
     	i++;
     }
     cout<<i<<endl;
}
