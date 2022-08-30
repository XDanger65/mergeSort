void mergeSort(std::vector<int>& arr, int brr[], int l ,int r)
{
    if (l>r)  return ;
     int m=(l+r)/2;

     mergesort(brr,arr,l,m);
     mergesort(brr,arr,m+1,r);

 merge(arr+l,brr+l,m-l+1,brr+m+1,r-m);
}
void merge(int crr[],int arr[],int n,int brr[],int m){
         for (int i=0,j=0,k=0;k<n+m;k++){

             if (i==n) 
             {  crr[k]=brr[j++]; continue;}
             if (j==m )
             {  crr[k]=arr[i++];continue;}

             c[k]=(arr[i]<brr[j])? arr[i++]:brr[j++];

         }



}