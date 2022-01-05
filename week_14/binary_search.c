#include <stdio.h>

int main() {

    int i,low,high,ketemu,key,n,mid;
    int sepatu[]={37,38,39,40,41,42,43}; 
    n = sizeof(sepatu)/sizeof(int);

    low = 0;  high= n; ketemu = -1;

    printf("Masukkan Ukuran Sepatu : ");  scanf("%d", &key);

    while (low <= high) {
        mid = (low+high)/2;

        if(key == sepatu[mid]){

            ketemu = mid;
            break;

        }else if(key < sepatu[mid]){

            high = mid-1;

        }else{

            low = mid+1;

        }
    }

    if (ketemu == -1) {

        printf("Tidak ditemukan");

    }else{

        printf("Sepatu ukuran %d ditemukan di indeks ke-%d\n",key, ketemu);

    }

  return 0;

}
