#include<stdio.h>
float inches2cm(float inches){
    return inches * 2.54;
     printf("%.2f inches is equal to %.2f cm", inches, (inches * 2.54));
}
float cm2inches(float cm){
    printf("%.2f cm is equal to %.2f inches", cm, (cm / 2.54));
}
float inches, cm;
int choice = 0;
int main(){
    printf("What do you want to convert? (Type 1 for Inches to cm and 2 for the inverse)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter inches: ");
        scanf("%f", &inches);
        inches2cm(inches);
        break;
    case 2:
        printf("Enter cm: ");
        scanf("%f", &cm);
        cm2inches(cm);
        break;
    }
}