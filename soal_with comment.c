#include <stdio.h>


int main(){
    //defining variables
    double x1,v1,x2,v2,s1,s2;
    // variables input
    printf("masukin x1, v1, x2, v2!!:");
    scanf("%lf %lf %lf %lf",&x1, &v1, &x2 ,&v2);

    //memeriksa apakah values diluar batasan
    if(x1 >= x2 || x1 > 1000 || x1 < 0 || x2 < 0 || x2 > 1000 || v1 > 1000 || v1  <= 0 || v2 > 1000 || v2 <= 0 ){
        printf("Invalid Inputs\n");}

    //memeriksa value v1 dan v2. ya kalo x1 < x2 terus v1 < v2 ya sampe kiamat gabakal ketemu lah!!!
    else if(v1 <= v2){
        printf("NO!\n");}
    
    //nah kalau beres cek syarat baru deh kita cari bakal ketemu apa nggak! <3
    else{
        //s = jarak. s = x untuk merepresentasikan posisi awal jangkrik
        s1 = x1;
        s2 = x2;
        /*Looping: selama s1 < s2, jarak kedua jangkrik akan bertambah sebesar v1. Kalo s1 >= s2 baru deh kita
        evaluasi bakal ketemu or not */
        while(s1 < s2){
            s1 += v1;
            s2 += v2;
            printf("s1 = %lf s2= %lf\n", s1, s2);}
        
        //Disini kita evaluate whether 2 jangkrik ini ketemuan
        if(s1 == s2){
            printf("YES\n");}

        //Kalo ga ketemu (s1 > s2) baru kita keluarin No <3    
        else{
            printf("No!\n");}
        
        //Ini sebenernya ga guna. This command's made to make sure the output is correct lah
        printf("s1_finale =%lf s2_finale=%lf\n", s1, s2);}
    return 0;
} 