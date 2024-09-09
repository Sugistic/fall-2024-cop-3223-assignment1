//including square root from math.h
#include <stdio.h>
#include <math.h>

//setting PI to use later
#define PI 3.14159
//Defining the functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


int main(){
    //setting the return values to a variable
    int distance = calculateDistance();
    int opinion1 = calculatePerimeter();
    int opinion2 = calculateArea();
    int opinion3 = calculateWidth();
    int opinion4 = calculateHeight();
    //displaying return values as asked
    printf("\nthe distance is %d, opinion on calculatePerimeter is a %d, opinion on calculateArea is a %d, opinion on calculateWidth is a %d, opinion on calculateHeight is a %d",distance,opinion1,opinion2,opinion3,opinion4);
    return 0;
}

double calculateDistance(){
    //setting variables
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
    //setting variables
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    //width is the same as diameter which is the distance
    double width = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe width of the city encompassed by your request is %lf\n",width);
    double opinion = 5;
    return opinion;
}

double calculateHeight(){
    double x1;
    double x2;
    double y1;
    double y2;
    //height is the same as diameter which is the distance
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);

    double height;
    double width;
    width = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe height of the city encompassed by your request is %lf\n",height);
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

    //Using cicumference formula while getting the radius from the distance function
    double perimeter;
    double radius = calculateDistance();
    perimeter = (2*PI*radius);
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe perimeter of the city encompassed by your request is %lf\n",perimeter);
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
    //using the area of a circle formula while getting the radius
    double distance = calculateDistance();
    double radius_squared = distance*distance;
    double area = (PI*radius_squared);
    printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
    printf("\nThe area between the two points is %lf\n",area);
    double opinion = 5;
    return opinion;
 }
