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
 len=9;
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
{int A[]={5,3,17,10,84,19,6,22,9},j,i;
 int len=sizeof(A)/sizeof(int);cout<<len<<endl;
 for(i=len/2-1;i>=0;i--)
 {MAX_HEAPIFY(A,i);}
 	for(j=0;j<len;j++){
    cout << A[j]<<" ";}
    return 0;
}

