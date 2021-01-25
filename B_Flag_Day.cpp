

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus > 201703L
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
# include <coroutine>
#endif
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <syncstream>
#include <version>
#endif
using namespace std;
typedef long long ll;


// Tanya Rajhans
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
   ll pf[10000001];
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
int n,v;
cin>>n>>v;
map<int,int>m;
while(v--){
    int a,b,c;
    cin>>a>>b>>c;
    if(m[a]==0 && m[b]==0 && m[c]==0){
        m[a]=1;
        m[b]=2;
        m[c]=3;
    }
    else if(m[a]!=0 && m[b]==0 && m[c]==0){
        if(m[a]==1){
            m[b]=2;
            m[c]=3;
        }
        else  if(m[a]==2){
            m[b]=1;
            m[c]=3;
        }
        else  if(m[a]==3){
            m[b]=1;
            m[c]=2;
        }
    }
    else if(m[b]!=0 && m[a]==0 && m[c]==0){
        if(m[b]==1){
            m[a]=2;
            m[c]=3;
        }
        else  if(m[b]==2){
            m[a]=1;
            m[c]=3;
        }
        else  if(m[b]==3){
            m[a]=1;
            m[c]=2;
        }
    }
    else if(m[c]!=0 && m[b]==0 && m[a]==0){
        if(m[c]==1){
            m[b]=2;
            m[a]=3;
        }
        else  if(m[c]==2){
            m[b]=1;
            m[a]=3;
        }
        else  if(m[c]==3){
            m[b]=1;
            m[a]=2;
        }
    }
    
}
for(int i=1;i<=n;i++){
    cout<<m[i]<<" ";
}
cout<<endl;
return 0;
}