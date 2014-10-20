#include <stdio.h>

int main() {
        int redove, zvzd, prz,a;

        int br_zvzd = 4;
        int br_redove = 4;

        for (redove=1; redove <= br_redove; redove++) {
                for (prz=1; prz <= br_zvzd; prz++) {
                        printf(" ");
                }
                for (zvzd=1; zvzd <= redove; zvzd++) {
                        printf("*");
                        printf(" "); 
                }
                printf("\n");
                br_zvzd = br_zvzd - 1;
        }


	br_zvzd = 7;
        br_redove = 7;

        for (redove=1; redove <= br_redove; redove++) {
                for (prz=1; prz <= br_zvzd; prz++) {
                        printf(" ");
                }
                for (zvzd=1; zvzd <= redove; zvzd++) {
                        printf("*");
                        printf(" "); 
                }
                printf("\n");
                br_zvzd = br_zvzd - 1;
        }



        br_zvzd = 11;
        br_redove = 11;

        for (redove=1; redove <= br_redove; redove++) {
                for (prz=1; prz <= br_zvzd; prz++) {
                        printf(" ");
                }
                for (zvzd=1; zvzd <= redove; zvzd++) {
                        printf("*");
                        printf(" "); 
                }
                printf("\n");
                br_zvzd = br_zvzd - 1;
        }
return 0;
}
