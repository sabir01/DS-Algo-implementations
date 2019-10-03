public class Sort__Mergesort{
    public static void Mergesort(int[] arr){
        Mergesort();//call the actual method
    }
    public static void Mergesort(int[] arr, int left, int right){
        if(left >= right)
            return;
        int middle = right - left + 1;

        Mergesort(arr, left, middle);
        Mergesort(arr, middle + 1, right);

        Merge(arr, left, right);
    }
    public static void Merge(int[] arr, int left, int middle, int right){
        int n1 = middle - left + 1;
        int n2 = right - middle;
        int i, j;

        int[] L = new int[n1];
        int[] R = new int[n2];

        for(i = 0; i < n1; i++){
            L[i] = arr[left + i - 1];
        }
        for(i = 0; i < n2; i++){
            R[i] = A[middle + i];
        }

    }

    public static void main(String[] args) {

    }
}
