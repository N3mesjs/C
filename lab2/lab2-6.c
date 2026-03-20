#include <stdio.h>

/*
	Calcolo coordinate centro di un rettangolo
*/


/* 
	Siano (p1_x, p1_y) e (p2_x, p2_y) le coordinate di due vertici di un rettangolo.

	PRE: 	
	POST: 	  
*/

void centroRettangolo(double p1_x, double p1_y, double p2_x, double p2_y, double *c_x, double *c_y) {
    *c_x = (p1_x + p2_x) / 2.0;
    *c_y = (p1_y + p2_y) / 2.0;
}



int main () {

	double p1_x, p1_y, p2_x, p2_y, c_x, c_y;	
	
	scanf("%lf %lf %lf %lf", &p1_x, &p1_y, &p2_x, &p2_y);

	centroRettangolo(p1_x, p1_y, p2_x, p2_y, &c_x, &c_y);

	printf("centro rettangolo (%.2f,%.2f) (%.2f,%.2f) = (%.2f,%.2f)\n", p1_x, p1_y, p2_x, p2_y, c_x, c_y);

}
