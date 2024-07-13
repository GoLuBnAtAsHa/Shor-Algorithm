#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
int gcd(int a, int b){
   if (b == 0)
   return a;
   return gcd(b, a % b); 
	}
int main(){
int n;
	cin>>n;
	float x=rand()%n;
	cout<<x<<endl;
	int r=0;
	
	while(pow(x,r)!=1){
		r++;
	}
	cout<<"The period is: "<<r<<endl;
	float q;
	q=pow(x,r/2)+1;
	double o;
	float e=pow(q,r/2)+1;
	float f=pow(x,r/2)-1;
		q=gcd(e,n);
	o=gcd(f,n);
	if(q* o == n&&q > 1&&q*o> 1)
		cout<<q<<"*"<<o<<"="<<n<<endl;
	if(r%2!=0){
		cout<<"Number is odd, restart"<<endl;
	return 0;
	}
 return 0;
}
