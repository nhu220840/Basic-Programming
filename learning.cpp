#include <stdio.h>
#include <math.h>

/* this is a comment */
//this is a comment

int main(){
    //loop:
    printf("Hello world\n");

    int a = 9, b = 265;
    long long c = a + b; //31
    int d = a - b; //11
    int e = a * b;
    int f = a / b;
    int g = a % b;  //11 % 2 = 1
    int luythua = pow(2, 3); //2^3
    //int 
    printf("%d %d %d %.2f %d\n", c, d, e, f, g);

    printf("%d", 6 != 6);

    a++; //a = a + 1;
    b--; //a = a - 1; 

    //neu ++, -- o truoc thi se in ra truoc roi moi ++, --
    printf("The value of a is: %d\n", a++); // in ra 9, a = 10
    printf("The value of b is: %d\n", b--); // in ra 265, b = 264

    // --c;
    // ++d;
    
    //neu ++, -- o sau thi se thuc hien ++, -- roi sau do moi in ra
    printf("The value of a is: %d\n", ++a); // a = 11, in ra 11
    printf("The value of b is: %d\n", --b); // b = 263, in ra 263

    printf("Please enter the value of day: ");
    int day; scanf("%d", &day); //ham nay de nhap 1 gia tri tu ban phim
    
    printf("The value of day is: %d\n", day);
    if(day == 1){
        printf("Sunday\n");
    }
    else if(day == 2){
        printf("Monday\n");
    }
    else if(day == 3){
        printf("Tuesday\n");
    }
    else{
        printf("The day in week\n");
    }

    switch(day){
        case 1 : printf("Sunday\n"); break;
        case 2 : printf("Monday\n"); break;
        case 3 : printf("Tuesday\n"); break;
        default : printf("The day in week\n"); break;
    }

    //printf("%d %d %d %.2f %d\n", c, d, e, f, g);
    //goto loop;
    printf("%d %d\n", a, b);

    int j = 5 != 3;
    printf("%d\n", j);
    int luy_thua = pow(a, 2);
    printf("%d\n", luy_thua);
    float can_bac_2 = sqrt(45);
    printf("%f\n", can_bac_2);
    float canbac3 = cbrt(a);
    printf("%f\n", canbac3);

    int min = fmin(fmin(a, b), fmin(c, d));
    printf("%d", min);
    int max = fmax(a, b);
    printf("%d", max);
    return 0;
}