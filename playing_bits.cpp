#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
   {
 ll i, j , x, n , m ,sum = 0 , a , b, c, val_stor , val_stor1 , val_stro2 , val_stor3 , count_kor = 0 , k, val_max = 0 , z;
cin >> n ;
for (int k = 5; k >= 0; k--) {

if (n&(1<<k)) count_kor++ ; 
a = n&(1<<k);
cout << a << endl;

}
cout << count_kor << endl;
   }
    return 0;
}
