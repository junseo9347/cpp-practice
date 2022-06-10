#include <iostream>
 
using namespace std;

typedef long long int lli;

int main(void) {
	lli A,B =0;
	cin >>A>>B;
	if (A>B){
		cout<<">";
	} else if (A==B){
		cout<<"==";
	} else{
		cout<<"<";
	}
}
