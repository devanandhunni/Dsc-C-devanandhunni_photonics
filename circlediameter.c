#include <stdio.h>
#include <math.h>

// Using symbolic constants for PI
#define PI 3.14159

// Function Prototypes
double calculateDiameter(int x1, int y1, int x2, int y2);
double calculateArea(double diameter);
double calculateCircumference(double diameter);

int main() {
    int x1, y1, x2, y2;

    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Calculate results
    double d = calculateDiameter(x1, y1, x2, y2);
    double area = calculateArea(d);
    double perimeter = calculateCircumference(d);

    // Output results
    printf("\n--- Circle Properties ---\n");
    printf("Diameter:      %.2f\n", d);
    printf("Area:          %.2f\n", area);
    printf("Circumference: %.2f\n", perimeter);

    return 0;
}

// Function to compute Diameter (D)
double calculateDiameter(int x1, int y1, int x2, int y2) {
    /* Applying the distance formula: D = sqrt((x2-x1)^2 + (y2-y1)^2)
       Using (double) for typecasting the integer differences 
    */
    double dx = (double)x2 - x1;
    double dy = (double)y2 - y1;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

// Function to compute Area: A = PI * r^2  or (PI * D^2) / 4
double calculateArea(double diameter) {
    double radius = diameter / 2.0;
    return PI * pow(radius, 2);
}

// Function to compute Circumference: C = PI * D
double calculateCircumference(double diameter) {
    return PI * diameter;
}
