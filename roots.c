#include<stdio.h>
#include<math.h>

int main(){
float a,b,c,dist,r1,r2;
printf("Enter the coefficients of quadratic equation:");
scanf("%f %f %f",&a,&b,&c);
dist = sqrt((b*b) - (4*a*c));
r1= (dist-b)/(2*a);
r2= (-1*(b+dist))/(2*a);
if (dist==0){
    printf("\nIt has equal roots");
printf("\n\n\nRoots are \n%f\n%f", r1,r2);

}
else if (dist>0){
    printf("\nIt has distinct roots");  
printf("\n\n\nRoots are \n%f\n%f", r1,r2);

}
else{
    printf("\nIt has imaginary roots");
}


return 0;
}