#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,b,j) for (int i = (a);(a)<(b)?i < (b):i > (b); i = (a)<(b)? i+j : i-j)
#define all(x) (x).begin(), (x).end()
#define nl cout<<"\n"
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define mk make_pair
#define a first
#define b second
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;

void print_v(vector<T> &v)
{  for (auto x : v) 
cout << x << "\n";  }


int bsd(vector<int> x,int t)
{
    int l=0,r=x.size()-1,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(x[mid]==t)
            return mid;
        if(x[mid]>t)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}

int bs(vector<int> x,int t)
{
    int l=0,r=x.size()-1,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(x[mid]==t)
            return mid;
        if(x[mid]>t)
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

vector<int> sieve(int n)
{
    vector<bool> isPrime(n+1,1);
    vector<int> getPrime;
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        for(int j=i*i;j<=n;j+=i)
            isPrime[j]=0;
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
            getPrime.push_back(i);
    }
    return getPrime;
}


long long exp(int a,int b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(b%2==0)
        return exp(a,b/2)*exp(a,b/2);
    else
        return a*exp(a*a,(b-1)/2);
}

ll selfPower(ll x, ll y, ll p) 
{ 
    ll res = 1;
    x = x % p;   
    if (x == 0) return 0;
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
  return res;
}

void solve()
{
    int n;
	cin>>n;
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	
	while(t--){
	solve();
	}
	return 0;
} 