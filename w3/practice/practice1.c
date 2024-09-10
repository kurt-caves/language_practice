int *unique(int n, int arr[]) {
    int isUnique = 0;
    for(int i = 0; i < n; i++) {
        isUnique = 1;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
        }
    }
}
void bubbleSort(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[j] > arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main() {
    int arr[5];
    unique(5, arr);
}