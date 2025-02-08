#include <stdio.h>
#define MAX 20

void bubbleSort(int arr[], int n) {
    int temp;
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void basari(int arr[], int n){
	int i,kotu=0,iyi=0;
	printf("En basarili ogrenciler\n");
	for(i=n-3;i<n;i++){
		printf("%d ",arr[i]);
		iyi+=arr[i];		
	}
	printf("\nEn iyilerin toplami=%d \n",iyi);
	kotu=arr[0]+arr[1]+arr[2];
	printf("\nEn basarisiz ogrenciler=%d %d %d",arr[0],arr[1],arr[2]);
	printf("\nEn kotulerin toplami=%d \n",kotu);		
}

int main(){
	int i,j,n,dizi[MAX];
	
	do{
		printf("Dizi boyutu giriniz.\n");
		scanf("%d",&n);		
	}while(n<6);
	
	printf("Dizi elemanlarini giriniz.\n");
	for(i=0;i<n;i++){
		scanf("%d",&dizi[i]);
	}
	bubbleSort(dizi,n);
	basari(dizi,n);
	
	return 0;
}
