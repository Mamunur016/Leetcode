#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
int i, j,temp=0;
for (i = 0; i < n-1; i++)
{
  for (j = 0; j < n-i-1; j++)
  {
    if (arr[j] > arr[j+1])
    {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
  }
}
}

// Function to print an array
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout <<" "<< arr[i];
}

// Driver program to test above functions
int main()
{
  int arr[] = {2,1};
  int N = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, N);


  int ans[N];
  ans[0]=arr[0];
  int j=0,k=0;

  for(int i=1;i<N;++i){
    if(arr[i]!=arr[i-1]){
            ++j;
        ans[j]=arr[i];
    }
    else{
        k++;
    }
  }
 int third_max_num=0,second_max_num=0,third_min_num=0,second_min_num=0,m=sizeof(ans)/sizeof(ans[0])-k;


 if(m>=3){
       second_min_num=ans[1];
    third_min_num=ans[2];
    second_max_num=ans[m-2];
    third_max_num=ans[m-3];
 }
 else{
    second_min_num=ans[0];
    third_min_num=ans[1];
    second_max_num=ans[1];
    third_max_num=ans[0];
 }



    cout<<second_min_num<<" "<<third_min_num<<endl;
   cout<<second_max_num<<" "<<third_max_num<<endl;


  return 0;
}


