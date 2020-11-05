/*____________________________________
 
           CODE IS LIFE <@_@>
____________________________________*/
 
#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <set>
#include<stack>

#include<array>
#include<string>
#include <numeric>
#define ll  long long
#define ull unsigned long long
#define fai(i,a)       for(ll i=0; i<a; i++)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define mxe(a,n)   (*max_element(a,a+n))
#define mne(a,n)   (*min_element(a,a+n))
#define vec  vector< int >
#define vv vector< vi >
#define vll vector< ll >
#define pii pair< int , int >
#define pll pair< ll , ll >
#define vpi vector< pii >
 
 
///...Other Operations...///
#define pi         2.0*acos(0.0)
#define eps        1e-11
#define sqr(n)     n*n
#define all(a)     a.begin(),a.end()
#define nl         "\n"
#define check      P("here\n")
#define gch        getchar()
#define pb         push_back
#define pp         pop_back
#define sz()       size()
#define SUM(a,n)   accumulate(a,a+n,0)
#define fin  freopen( "input.txt", "r", stdin );
#define fout  freopen( "output.txt", "w", stdout );
#define Dpos(n)    fixed<<setprecision(n)
#define w(t)        cin>>t; while(t--)
#define count_bit(n)      __builtin_popcount(n)
 
///...define mathematics...///
#define INF (int)1e10
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

using namespace std;
 
///...Mathematics...///
template <typename T> T BigMod(T b,T p,T m){if(p==0)return 1;if(p%2==0){T s=BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T POW(T B,T P){    if(P==0)        return 1;    if(P&1)    return B*POW(B,P-1);    else      return sqr(POW(B,P/2));}
template <typename T> T gcd(T a,T b){    if(a<0)        return gcd(-a,b);    if(b<0)        return gcd(a,-b);    return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b){    if(a<0)        return lcm(-a,b);    if(b<0)        return lcm(a,-b);    return a*(b/gcd(a,b));}
 
 
 
///...String Operation...///
// int sumDigits(int n){ int sum = 0; while (n != 0) { sum += n % 10; n /= 1; }  return sum;   }
 
int b2d(long long n){    int decimalNumber = 0, i = 0, remainder;    while (n!=0)    {        remainder = n%10;     n /= 10;        decimalNumber += remainder*pow(2,i);  ++i; }    return decimalNumber;}
vector<ll> decToBinary(int n) {    vector<ll> binaryNum(12);   while (n > 0) {   binaryNum.pb( n % 2);  n = n / 2; }     reverse(all(binaryNum));   return binaryNum;} 
 
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
ll toLlint(string s) { ll sm; stringstream ss(s); ss>>sm; return sm; }
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false; }
template <class T> string NTS ( T Number ){stringstream ss;ss << Number;return ss.str();}
bool isprime(int w){if(w == 0) return false;if(w == 1) return false;int sqrtw = int(sqrt((double)w));for(int q = 2; q <= sqrtw; q++){if(w % q == 0) return false;}return true;}
 
#define   IOS   {ios_base::sync_with_stdio(0); cin.tie(0);}
 
///.............End Of Template..............////
 /* ll binarySearch(ll *arr,ll low,ll high,ll key){
    
     while(low<= high){
         ll mid= (low+high)/2;
         if(arr[mid]>key){
             high=mid-1;
         }
         else if (arr[mid]<key){
             low=mid+1;
         }
         else {
             return mid;
         }
     }
     return -1;
}
*/
const ll N = 1e5 + 1;

bitset < N+1 > bs;
vector < ll > prime ;
void sieve ( ){
 bs.set();
 bs[0] = bs[1] = 0;
 for ( ll i = 2 ; i<N ; ++i ){
     if ( bs[i] ) {
         prime.push_back ( i );
         for ( ll j = i*i ; j<N ; j+=i ) bs[j] = 0;
     }
 }
 return;
}



bool isPrime(int n) {
  if(n<=1)return false;
  for (int i = 2; i <=sqrt(n); i++) {
    if (n % i == 0) return false;
  }

  return true;
}

void prime_divisor(ll n,ll q) 
{ 

    if(n%q)cout<<n<<nl;
    else{
     ll nn= n;
    for (ll i = 1; i <= sqrt(n); i++) { 
     
        if (n % i == 0) { 
           {
           if((n/i)%q != 0){cout<<n/i<<nl;break;}
           	
           }
            
        } 
    }
    }
    
    
}

unsigned long long pow2(unsigned long long n , unsigned long long a ){
    unsigned long long b = n ;
    n = 1 ;
    for(unsigned long long i = 1 ; i<= a ; i++){
        n*=b;
    }
    return n ;
}
int main()
{  IOS
  ll t;
  cin>>t;
  while(t--){
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   cout<<max(a+b,c+d)<<nl;
  	}
  
  
}