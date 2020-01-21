#include <bits/stdc++.h>
using namespace std;

int main()
{


	int n, sum, digit, x, y, maxi = 0;
    map < pair<int,int> , int > cnt;
 
    cin>> n ;
 
    for( int i = 0; i < n; i++ )
    {
        cin >> x >> y;
      
        cnt[ {x, y} ]++;
    }
    for( auto it: cnt )
    {
        if( it.second > maxi )
        {
            maxi = it.second;
        }
    }
    cout<<maxi;
 
	 
	 
	
}
