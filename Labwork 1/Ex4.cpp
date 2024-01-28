#include <stdio.h>

int main(){
    int given_radius = 4;
    double area1 = given_radius * given_radius * 3.14;
    double circumference1 = 2 * given_radius * 3.14;
    printf("An area of a circle with given radius equal 4 is: %lf\n", area1);
    printf("A circumference of a circle with given radius equal 4 is: %lf\n", circumference1);

    printf("Please enter a radius: ");
    int radius; scanf("%d", &radius);
    double area2 = radius * radius * 3.14;
    double circumference2 = 2 * radius * 3.14;
    printf("An area of a circle is: %lf\n", area2);
    printf("A circumference of a circle is: %lf\n", circumference2);
}