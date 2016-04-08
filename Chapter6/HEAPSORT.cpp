#include <iostream>
using namespace std;
void swap(int *x, int *y);
void MAX_HEAPIFY(int A[ ],int i);
void BUILD_MAX_HEAP(int A[],int len);

int left(int i) 
{
return 2*i;
}

int right(int i) 
{return 2*i+1;
}

void swap(int *x, int *y)
{ int temp = *x;
    *x = *y;
    *y = temp;
}

void MAX_HEAPIFY(int A[],int i,int heap_size)
{ 
 int l,r,largest;
 i=i+1;
 l=left(i);
 r=right(i);

 if(l<= heap_size && A[l-1]>A[i-1])
 {largest=l ;}
 else largest=i;
 
 if(r<= heap_size && A[r-1]>A[largest-1])
 {largest=r ;}
 if(largest!=i)
 {swap ( &A[largest-1],&A[i-1]) ;
 MAX_HEAPIFY(A,largest-1,heap_size) ;}  //注意此处的递归应该放在if语句中，否组跳不出去 
}

void BUILD_MAX_HEAP(int A[],int len)
{int j,i;
  int heap_size=len;
 for(i=len/2-1;i>=0;i--)
 {MAX_HEAPIFY(A,i,heap_size);}
}

int main()
{int A[]={5,3,17,10,84,19,6,22,9},i,j;
 int len=sizeof(A)/sizeof(int);
 BUILD_MAX_HEAP(A,len);
  	for(j=0;j<len;j++){
    cout << A[j]<<" ";}
     cout<<endl;
 
 int heap_size=len;
 
 for(i=len-1;i>=0;i--)
 {swap(&A[0],&A[i]);
  heap_size=heap_size-1;
  MAX_HEAPIFY(A,0,heap_size);
 }
 	for(j=0;j<len;j++){
    cout << A[j]<<" ";}
    return 0;
}





