#include <stdio.h>
#include <math.h>

// Function to calculate Euclidean distance
double euclidean_distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    
    // Input coordinates of the two points
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate and print the Euclidean distance
    double distance = euclidean_distance(x1, y1, x2, y2);
    printf("The Euclidean distance between the points is: %.2lf\n", distance);
    
    return 0;
}
