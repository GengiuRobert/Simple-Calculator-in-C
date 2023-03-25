#include <stdio.h>
#include <stdlib.h>

int main() {
    puts("Welcome to the calculator, I am happy to help you!\n");
    puts("As a quick reminder, you can make 5 operations"
         "\n+ -> addition with a numeber"
         "\n- -> substraction with a number"
         "\n* -> multiplication with a number"
         "\n/ -> dividing with a number"
         "\ns -> You chosed to stop the calculator\n\n");

    char operation;
    float nr1;
    float rez = 0;
    float mul = 1;
    float div = 1;
    int loop_counter = -1;
    do {

        // IF THE DO WHILE LOOP IS EXECUTED FOR THE FIRST TIME , THE NUMBER YOU CHOSED WILL BE DISPLAYED , DESPITE ANY OF THE OPERATION
        loop_counter++;
        // printf("loop = %d", loop_counter);
        if (operation == 's') {
            //  ---->  "YOU CLOSED THE CALCULATOR!"  <----
            break;
        }
        puts("Write a number and the symbol related to the operation you want to do");
        scanf("%f %c", &nr1, &operation);

        if (operation == '+') {
            rez = rez + nr1;
            printf("The result of the operation is %.3f \n\n", rez);
        } else if (operation == '-') {
            rez = rez - nr1;
            printf("The result of the operation is %.3f \n\n", rez);
        } else if (operation == '*') {
            if (loop_counter == 0) {
                mul = mul * nr1;
                rez = mul;
            } else if (loop_counter != 0) rez = rez * nr1;
            printf("The result of the operation is %.3f \n\n", rez);
        } else if (operation == '/') {
            if (loop_counter == 0) {
                div = div * nr1;
                rez = div;
            } else if (loop_counter != 0) {
                if (rez != 0 && nr1 != 0) {
                    rez = rez / (nr1 * 1.0);
                } else if (rez != 0 && nr1 == 0) {
                    puts("ERROR ---> YOU CAN'T DIVIDE BY 0");
                    break;
                } else if (rez == 0) { rez = rez * 0; }
            }
            printf("The result of the operation is %.3f \n\n", rez);
        }
    } while (operation != 's');

}

