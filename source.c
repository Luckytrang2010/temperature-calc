#include <stdio.h>

double converttemp(int from,int to,double temp) {
    double result1 = 0;
    if (from == 0) {
        if (to == 1) {
            //c to f
            result1 = (temp*(9/5))+32;
        } else if (to == 2) {
            //c to k
            result1 = temp+273.15;
        }
    } else if (from == 1) {
        if (to == 0) {
            //f to c
            result1 = (temp-32)*(5/9);
        } else if (to == 2) {
            //f to k
            result1 = (temp-32)*(5/9)+273.15;
        }
    } else if (from == 2) {
        if (to == 0) {
            //k to c
            result1 = temp-273.15;
        } else if (to == 1) {
            //k to f
            result1 = (temp-273.15)*(9/5)+32;
        }
    }
    return result1;
}

int main() {
    int op;
    int op1;
    double temperature;
    printf("Temperature Calculator\n-------------\nConvert from...\n[0] Celsius\n[1] Fahrenheit\n[2] Kelvin\nOption> ");
    scanf("%d",&op);
    printf("Convert to...\n[0] Celsius\n[1] Fahrenheit\n[2] Kelvin\nOption> ");
    scanf("%d",&op1);
    printf("Temperature value: ");
    scanf("%lf",&temperature);
    if (op == op1) {
        printf("genius...it's %lf",temperature);
    } else {
        printf("Result: %.2f",converttemp(op,op1,temperature));
    }
}