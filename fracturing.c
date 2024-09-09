#include <stdio.h>


//setting my variables to use later
#define PI 3.14159

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


int main(){
    int distance = calculateDistance();
    int opinion1 = calculatePerimeter();
    int opinion2 = calculateArea();
    int opinion3 = calculateWidth();
    int opinion4 = calculateHeight();
    printf("%d,%d,%d,%d,%d",distance,opinion1,opinion2,opinion3,opinion4);
    return 0;
}
double calculateDistance(){
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    //calculating distance then printing the user's coordinate points and the distance between them
    double distance;
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe distance between the two points is %lf\n",distance);
    return distance;
}

double calculateWidth(){
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    double width;
    width = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("The width of the city encompassed by your request is %lf",width);
    double opinion = 5;
    return opinion;
}

double calculateHeight(){
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    double height;
    double width;
    width = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("The height of the city encompassed by your request is %lf",height);
    double opinion = 5;
    return opinion;
}

double calculatePerimeter(){
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    //calling the width and height functions in order to calculate perimeter
    double perimeter;
    double radius = calculateDistance();
    perimeter = (2*pi*radius);
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe perimeter between the two points is %lf",perimeter);
    double opinion = 5;
    return opinion;
}

 double calculateArea(){
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    calculateDistance();
    double area;
    double radius_squared;
    radius_squared = distance*distance;
    area = (PI*radius_squared);
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe area between the two points is %lf",area);
    double opinion = 5;
    return opinion;
 }
