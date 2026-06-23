 #include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);

    emp.hra = emp.basic * 0.20;  // 20% HRA
    emp.da = emp.basic * 0.10;   // 10% DA
    emp.gross = emp.basic + emp.hra + emp.da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("Gross Salary  : %.2f\n", emp.gross);

    return 0;
}