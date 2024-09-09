//stdlib.h is for the absoluate value helper function 
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //setting my variables to use later
    double x1;
    double x2;
    double y1;
    double y2;
    //getting user input for variable coordinate points
    scanf("%lf",&x1);
    scanf("\n%lf",&x2);
    scanf("\n%lf",&y1);
    scanf("\n%lf",&y2);


    double calculateDistance();
        //calculating distance then printing the user's coordinate points and the distance between them
        double distance;
        distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
        printf("\nThe distance between the two points is %lf\n",distance);
        return distance;

    double calculateWidth();
        double width;
        width = (abs(x2-x1));
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
        printf("The width of the city encompassed by your request is %lf",width);

    double calculateHeight();
        double height;
        width = (abs(y2-y1));
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
        printf("The height of the city encompassed by your request is %lf",height);

    double calculatePerimeter();
    //calling the width and height functions in order to calculate perimeter
        calculateHeight();
        calculateWidth();
        double perimeter;
        perimeter = ((width*2) + (perimeter*2));
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
        printf("\nThe perimeter between the two points is %lf",perimeter);
        int opinion = 5;
        return opinion;
    double calculateArea();
        double area;
        calculateHeight();
        calculateWidth();
        area = (width * perimeter);
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",x1,y1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",x2,y2);
        printf("\nThe area between the two points is %lf",area);
    






    return 0;









}