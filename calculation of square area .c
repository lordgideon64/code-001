#include <stdio.h>

int main() {
    float side, area;
    char kipkirui; 

    do {
        printf("Enter the length of the side of the square : ");
        scanf("%f", &side);

        if (side < 0) {
            printf("Exiting the program...\n");
            break;
        } else if (side == 0) {
            printf("Error: Side length cannot be 0.\n");
        } else {
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
        }
           printf("Do you want to compute the area of another square? (y/n): ");
       getchar() ; 
        scanf("%c", & kipkirui);
        
    } while (kipkirui== 'y' || kipkirui == 'Y');

    return 0;
}