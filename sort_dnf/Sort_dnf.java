
public class Sort_dnf 
{
    public static void sort012(int[] arr)
    {
        //Write your code here
        int low=0;
        int mid=0;
        int high = arr.length-1;
        while(mid<=high){
            if(arr[mid] == 0){
                swap(arr, low, mid);
                mid++;
                low++;
            }
            
            else if (arr[mid] == 2){
                swap(arr, mid, high);
                high--;
            }
            else
                mid++;
        }
    }
    public static void swap(int a[], int l, int h){
        int temp = a[l];
        a[l] = a[h];
        a[h] = temp;
    }

    public static void main(String[] args){
        int arr[] = {1,1,1,2,0,0,2,0,1};
        new Sort_dnf();
        sort012(arr);
        for(int i=0; i< arr.length; i++){
            System.out.print(arr[i]+" ");
        }

    }
}