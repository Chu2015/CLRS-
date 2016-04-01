#include <iostream>
using namespace std;
int A[ ] = {16, 2, 77, 40, 171};
int n,i,j,key;
int main () {
for ( n=1 ; n<5 ; n++ )
{key=A[n];
 i=n-1;
 while(A[i]>key){
 	A[i+1]=A[i];
 	A[i]=key;
 	i=i-1;
 }
}
for(j=0;j<5;j++){
cout << A[j]<<" ";}
return 0;

}


