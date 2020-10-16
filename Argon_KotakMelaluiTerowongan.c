#include <stdio.h>

int main(){
    int a,i,j,k;
    int x[100][100];

    printf("\n\t\tProgram untuk Menghitung Volume Kotak yang Dapat Memasuki Terowongan dengan Tinggi 41\n\n");

    printf("Masukkan banyak kotak yang ingin dihitung volumenya: ");
    scanf("%d",&a);

    printf("------------------------------------------------");

	for(i=1;i<=a;i++){
		for(j=1;j<=3;j++){
            if (j==1)
                printf("\nMasukkan panjang kotak ke-%d: ", i);
            else if (j==2)
                printf("\nMasukkan lebar kotak ke-%d: ", i);
            else if (j==3)
                printf("\nMasukkan tinggi kotak ke-%d: ", i);
            scanf("%d",&x[i][j]);}
        printf("------------------------------------------------");
	}
	printf("------------------------------------------------");
	for(i=1;i<=a;i++){
		if(x[i][3]<41){
            k=x[i][1]*x[i][2]*x[i][3];
            printf("\nVolume kotak ke-%d adalah %d dan dapat masuk ke terowongan\n",i,k);
            }
        else
            printf("\nKotak ke-%d tidak dapat masuk ke dalam terowongan karena tingginya lebih dari sama dengan 41\n", i);
	}
	return 0;
}
