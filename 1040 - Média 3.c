#include <stdio.h>
int main () {
    double n1, n2, n3, n4, media, nota_exame, media_final;
    scanf("%lf %lf %lf %lf\n", &n1, &n2, &n3, &n4);
    media = ((2*n1) + (3*n2) + (4*n3) + (1*n4))/10.0;
    printf("Media: %.1lf\n", media);
    if(media >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if(media < 5.0) {
        printf("Aluno reprovado.\n");
    }
    else if(5.0 <= media < 7.0) {
        printf("Aluno em exame.\n");
        scanf("%lf\n", &nota_exame);
        printf("Nota do exame: %.1lf\n", nota_exame);
        media_final = (media + nota_exame)/2.0;
        if(media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        else if(media_final < 5.0) {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media_final);
    }
    return 0;
}
