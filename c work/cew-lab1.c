#include <stdio.h>

// QUESTION # 01
// int main(){
//     int Id;
//     float worked_hours, amount_received;

//     printf("Enter the Employee Id:",Id);
//     scanf("\n%d",&Id);

//     printf("Enter the hours worked:",worked_hours);
//     scanf("\n%f",&worked_hours);

//     printf("Enter the amount received:",amount_received);
//     scanf("\n%f",&amount_received);

//     printf("Employee id:%d\n",Id);

//     // salary = ;
//     printf("Salary of a person= %.2f\n",worked_hours*amount_received);

//     return 0;

// }


// QUESTION # 02

// int main()
// {int height,width;
// printf("Enter the height of a rectangle:");
// scanf("\n%d",&height);

// printf("Enter the width of a rectangle:");
// scanf("\n%d",&width);

// printf("The perimeter of a Rectangle=%d\n",2*(height+width));

// printf("The area of a rectangle =%d\n",height*width);
// return 0;
// }

// QUESTION # 03

// int main(){
//     int height;
//     printf("Enter the height of a person:");
//     scanf("\n%d",&height);

//     if (height < 150) {
//         printf("Category: Dwarf\n");}
//      else if (height >= 150 && height < 165) {
//         printf("Category: Average\n");}
//      else {    
//         printf("Category:Tall\n");}

//     return 0;
// }


// QUESTION # 04
// void decimalToBinary(int decimal) {
//     if (decimal > 0) {
//         decimalToBinary(decimal / 2);
//         printf("%d", decimal % 2);
//     }
// }

// int main() {
//     int decimalNumber;
    
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimalNumber);
    
//     if (decimalNumber < 0) {
//         printf("Please enter a non-negative decimal number.\n");
//         return 1;
//     }
    
//     printf("Binary representation: ");
    
//     if (decimalNumber == 0) {
//         printf("0");
//     } else {
//         decimalToBinary(decimalNumber);
//     }
    
//     printf("\n");
//     return 0;
// }


// QUESTION # 05
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Change n to the desired number of Fibonacci sequence elements.
    
    printf("Fibonacci Series for n = %d: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}