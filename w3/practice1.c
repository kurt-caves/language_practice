int *unique(int n, arr[]) {
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

int main() {
    int arr[5];
    unique(5, arr);
}