int peakElement(int arr[], int n)
{
   int left = 0;
   int right = n-1;
   int mid;
   while(left <= right)
   {
       mid = (left + right) >> 1;
       
       if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])) break;
       if(arr[mid-1] > arr[mid]) right = mid-1;
       else left = mid+1;
   }
   return mid;
}
