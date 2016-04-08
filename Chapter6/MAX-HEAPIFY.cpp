#include <iostream>
using namespace std;

void MAX_HEAPIFY(int A[ ],int i);
int left(int i) 
{
return 2*i;
}

int right(int i) 
{return 2*i+1;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void MAX_HEAPIFY(int A[],int i)
{ 
 int l,r,len,largest;
 len=14;
 i=i+1;
 l=left(i);
 r=right(i);

 if(l<=len && A[l-1]>A[i-1])
 {largest=l ;}
 else largest=i;
 
 if(r<=len && A[r-1]>A[largest-1])
 {largest=r ;}
 if(largest!=i)
 {swap ( &A[largest-1],&A[i-1]) ;
 MAX_HEAPIFY(A,largest-1) ;}  //注意此处的递归应该放在if语句中，否组跳不出去 
}

int main()
{int A[]={27,17,3,16,13,10,1,5,7,12,4,8,9,0},j;
 int len=sizeof(A)/sizeof(int);
 MAX_HEAPIFY(A,2) ;
 	for(j=0;j<14;j++){
    cout << A[j]<<" ";}
    return 0;
}

