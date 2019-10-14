#include <stdio.h>
#define PI 3.14159
float surface_area (float,float);
int main()
{
    float radius,height,cost_per_square_cm,number_of_containers,area,cost_of_one_container,total_cost;
    printf("\nEnter radius of the container : ");
    scanf("%f",&radius);
     printf("\nEnter height of the container : ");
    scanf("%f",&height);
     printf("\nEnter cost per square cm of the container : ");
    scanf("%f",&cost_per_square_cm);
     printf("\nEnter number of containers : ");
    scanf("%f",&number_of_containers);
    area = surface_area(radius,height);
    cost_of_one_container= area*cost_per_square_cm;
    total_cost=number_of_containers*cost_of_one_container;
    printf("\nCost of one container : %.2f",cost_of_one_container);
    printf("\nTotal cost : %.2f",total_cost);


}
float surface_area (float radius,float height)
{
    float area_of_circular_base,area_of_outside,circumference,surface_area;
    area_of_circular_base=PI*radius*radius;
    circumference= 2.0*radius;
    area_of_outside = circumference * height;
    surface_area= area_of_circular_base + area_of_outside;
    return (surface_area);
}
