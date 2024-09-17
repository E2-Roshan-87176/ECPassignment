#include <stdio.h>

int main() {
    float x, y;

    
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    
    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) is in Quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) is in Quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) is in Quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) is in Quadrant IV.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) is on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The point (%.2f, %.2f) is on the X-axis.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    } else {
        
        printf("Invalid point.\n");
    }

    return 0;
}

