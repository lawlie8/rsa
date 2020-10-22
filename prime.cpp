#include<iostream>
#include<math.h>
#include<time.h>
#include <bits/stdc++.h>
using namespace std;

int random_power(int ing);
string prime_check();

string prime_check(long long int x)//miller-rabin test
{
  long long int i = 1;
  long double m = 0.0;
  cout<<x<<" is x\n";
  int r = 0;

while(true){

  m = x / pow(2.0,i);
  i++;
  if (m - floor(m) != 0 ){
    break;
  }
  else{ r = m; }
}

int a = 2;
int b0 = pow(a,r);
int b1=0;
b0 = b0 % x;
  if(b0 == 1 or b0 == -1){
    cout<<x<<" is prime\n";
  }
  else{
    while (true) {
    b1 = pow(2,b0);
    b1 = b1 % x;
    //cout<<"b0 is "<<b1<<"\n";
    if(b1 == -1){
      cout<<x<<" is prime\n";
      break;
    }
    else if(b1 == 1){
      cout<<x<<" is composite\n";
      break;
    }
    else{
      b0 = b1;
    }

  }

}
return "true";
}


int main(){

long long int x;
long long lrg_power;
long long  int v;
string xx = "";
srand(time(NULL));
long long int low =pow(2.0,20.0) - 1;
long long int high =pow(2.0,30.0) + 1;
for (int i = 0; i < 1; i++) {//for 2 prime numbers
  while(true){
  v = rand() %  high + low;
  xx = prime_check(v);
  if(xx == "true"){break;}
}
  //cout<<v<<"sssss\n";
}

}
