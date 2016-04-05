#include <iostream>
using namespace std;
int PARTITION(int A[],int p,int q);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int PARTITION(int A[],int p,int q){

    int i=p,j,x;
	x=A[p];
    for(j=p+1;j<=q;j++)
    {if (A[j]<=x)
      {i=i+1;
       swap(&A[i], &A[j]);
	  }
   	}
     swap(&A[i], &A[p]);
     return i;
}

void QUICKSORT(int A[],int p,int q){ 
    if (p<q)
	{ int r;
    r=PARTITION(A,p,q);
    QUICKSORT(A,p,r-1);
    QUICKSORT(A,r+1,q);}
}
  
int main(){
	int A[]={13,19,9,5,12,8,7,4,21,2,6,11},j=0;
	QUICKSORT(A,0,11);
	for(j=0;j<11;j++){
    cout << A[j]<<" ";}
    return 0;
}
