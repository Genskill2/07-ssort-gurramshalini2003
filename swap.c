void swap_max(int arr[],int l,int n){
 
  int count = arr[n];
  int sum = n;
  int foo = arr[n];
  for(int x =n+1;x<l;x++){
    if(count<arr[x]){
      count=arr[x];
      sum = x;
      }
  }
  arr[n]=arr[sum];
  arr[sum]=foo;
  
  
  
  
  }
 void ssort(int arr[],int l){
   
   for(int x=0;x<l;x++){
     swap_max(arr,l,x);
     
   }
   
 }
