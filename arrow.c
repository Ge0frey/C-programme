#include <stdio.h>
#include <stdlib.h>

int main (void) {
    typedef struct { //Make a struct 
        int x;
        int y;
    } Point;  //struct stored in a Point variable

    Point p1;
    p1.x = 2;
    p1.y = 4;

    printf("p1 x:%d, y:%d\n", p1.x, p1.y);

    Point *p2;
    p2 = malloc(sizeof(Point));

    p2->x = 5;
    p2->y = 10;

    printf("p2 x:%d, y:%d\n", p2->x, p2->y);

    Point *p3;
    p3 = &p1;

    p3->x = 6;
    p3->y = 8;
    printf("p3 x:%d, y:%d\n", p3->x, p3->y);


    return 0;
}