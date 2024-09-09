#include <stdio.h>

int main(){

double calculateDistance();
    //setting my variables to use later
        double dx1;
        double dx2;
        double dy1;
        double dy2;
        double distance;
        //getting user input for variable coordinate points
        scanf("%lf",&dx1);
        scanf("\n%lf",&dx2);
        scanf("\n%lf",&dy1);
        scanf("\n%lf",&dy2);
        //calculating distance then printing the user's coordinate points and the distance between them
        distance = ((dx2-dx1)*(dx2-dx1))+((dy2-dy1)*(dy2-dy1));
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",dx1,dy1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",dx2,dy2);
        printf("\nThe distance between the two points is %lf",distance);
        return distance;

    double calculatePerimeter();
    //setting up the perimeter coorindate values
        double px1;
        double px2;
        double py1;
        double py2;
        double perimeter;
        //getting user input for coordinate points for perimter
        scanf("\n%lf",&px1);
        scanf("\n%lf",&px2);
        scanf("\n%lf",&py1);
        scanf("\n%lf",&py2);
        //calculating distance then printing the user's coordinate points and the distance between them
        distance = ((dx2-dx1)*(dx2-dx1))+((dy2-dy1)*(dy2-dy1));
        printf("\nPoint #1 entered: x1 = %lf; y1 = %lf",px1,py1);
        printf("\nPoint #2 entered: x2 = %lf; y2 = %lf",px2,py2);
        printf("\nThe distance between the two points is %lf",distance);
        int opinion = 5;
        return opinion;









}