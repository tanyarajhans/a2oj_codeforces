#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>
#define f               first
#define s              second
#define ll               long long
#define pb               push_back
#define pii              pair<int,int>
#define vi               vector<int>
#define mii              unordered_map<int,int>
#define pqb              priority_queue<int>
#define pqs              priority_queue< int,vi,greater<int> >
#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define mod              1000000007
#define inf              1e10
#define ps(x,y)          fixed<<setprecision(y)<<x
#define mk(arr,n,type)   type *arr=new type[n];
#define w(x)             int x; cin>>x; while(x--)
#define me(i,start,end)  for(int i=start;i<end;i++)
#define he(i,end,start) for(int i=end-1;i>=start;i--)
#define all(v)         v.begin(),v.end()

using namespace std;
ll pf[10000001];


// Tanya Rajhans
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

   void prime(){
       memset(pf,0,10000001);
       pf[0]=pf[1]=1;
   for(ll i=2;i<10000001;i++){
        if(pf[i]==0){
            for(ll j=i*i;j<10000001;j=j+i)
                  pf[j]=1;
        }
    }
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int check_ps(ll n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
w(t){
    int n,m;
    cin>>n>>m;
    unordered_map<int,int> f;
    set<int> s;
    
    bool aa=true;
    vector<int>a[m+1];
    vector<int>ans(m+1);
    for(int p=0;p<m;p++){
      int k;
      cin>>k;
      for(int i=0;i<k;i++){
          int x;
          cin>>x;
          a[p+1].pb(x);
      }
    }
    vector<pair<int,int> > v;
    for(int i=1;i<m+1;i++)
    v.pb(make_pair(a[i].size(),i));
    sort(v.begin(), v.end());
    
    for(int i=0;i<v.size();i++){
          int d=v[i].s;
          for(int j=0;j<a[d].size();j++){
              if(f[a[d][j]]<(m+1)/2 && ans[d]==0){
              ans[d]=a[d][j];
              f[a[d][j]]++;
              break;
            }
          }
    }
    for(int p=1;p<m+1;p++)
        if(ans[p]==0){
            aa=false;
            break;
    }
            
     
    if(aa==true){
        cout<<"YES"<<endl;
    for(int p=1;p<=m;p++){
        cout<<ans[p]<<" ";
    }
      cout<<endl;
    }
    else
    cout<<"NO"<<endl;
}
return 0;
}