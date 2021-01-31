#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
    int x;
    int y;
} Tacka;

int orijentacijad(Tacka A, Tacka B, Tacka C){
    return (B.x-A.x)*(C.y-A.y) - (C.x-A.x)*(B.y-A.y);

}
void saIsteStrane(Tacka A, Tacka B, Tacka C, Tacka D){
    int d1=orijentacijad(A,B,C);
    int d2=orijentacijad(A,B,D);

    if((d1>0 && d2>0 )|| (d1<0 && d2<0))
        printf("Sa iste su strane");
    else
        printf("Sa suprotne su strane");

}

int main() {
    int x,y;
    printf("Unesite koordinate tacke A\n");
    scanf("%d %d",&x,&y);
    Tacka A={x,y};


    printf("Unesite koordinate tacke B\n");
    scanf("%d %d",&x,&y);
    Tacka B={x,y};


    printf("Unesite koordinate tacke C\n");
    scanf("%d %d",&x,&y);
    Tacka C={x,y};


    printf("Unesite koordinate tacke D\n");
    scanf("%d %d",&x,&y);
    Tacka D={x,y};

    saIsteStrane(A,B,C,D);
    return 0;
}
