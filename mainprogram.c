#include <stdio.h>
int main() {
    float temperature;

    printf("Enter temperature value: ");
    scanf("%f", &temperature);

    if(temperature > 30)
        printf("Temperature is High\n");
    else
        printf("Temperature is Normal\n");

    return 0;
}
