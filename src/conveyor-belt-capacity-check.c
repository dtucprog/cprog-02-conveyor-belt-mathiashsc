#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    scanf("%d", &motorCount);
    scanf("%d", &totalPackageWeight);

    if (totalPackageWeight <= motorCount * MOTOR_CAPACITY) {
        printf("Yes! The conveyor belt can carry the packagesing\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages\n");
    }
}
