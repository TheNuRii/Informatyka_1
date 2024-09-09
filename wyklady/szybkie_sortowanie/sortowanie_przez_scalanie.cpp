
void mergeAB(int C[], int A[], int sizeA, int B[], int sizeB){

    for (int i = 0, j = 0, k = 0; k < sizeA +  sizeB; k++){
        if (i == sizeA) {C[k] = B[j++];
            continue;}
        if (j == sizeB) {C[k] = A[i++];
            continue;}
        C[k] = (A[i] < B[j]) ? A[i++] : B[j++];
    }
}

void mergesort(int A[], int first, int last){
    if (last <= first) return;

    int middle = (first + last) / 2;
    mergesort(A, first, middle);
    mergesort(A, middle + 1, last);
    mergeAB();
}