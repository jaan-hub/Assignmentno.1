#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, surfaceArea, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;
    volume = PI * radius * radius * height;
    printf("Surface Area = %.2f\n", surfaceArea);
    printf("Volume = %.2f\n", volume);

    return 0;
}