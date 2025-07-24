#include <stdio.h>
#include <math.h>
#define PI 3.14159265

void add(void);
void sub(void);
void mult(void);
void div(void);
void root(void);
void square(void);
void cube(void);
void power(void);
void quadratic(void);
void trignometry(void);
void combination(void);
void permutation(void);
int derivative();
void complex();
void addComplex(int, int, int, int);
void subtractComplex(int, int, int, int);
void multiplyComplex(int, int, int, int);
int definite_integration();
int percentage();
int Logarithm();
int exponential();
int unit_conversions_physics();
int constants();

int main() {
    int operation;
    printf("Welcome To Scientific Calculator\n");
    printf("Created by Anas and Owais\n");

    printf("\nEnter an Operation:");
    printf("\n(1)-Addition");
    printf("\n(2)-Subtraction");
    printf("\n(3)-Multiplication");
    printf("\n(4)-Division");
    printf("\n(5)-Root");
    printf("\n(6)-Square");
    printf("\n(7)-Cube");
    printf("\n(8)-Power");
    printf("\n(9)-Percentage");
    printf("\n(10)-Quadratic Equation");
    printf("\n(11)-Trigonometry Function");
    printf("\n(12)-Logarithm Function");
    printf("\n(13)-Exponential Function");
    printf("\n(14)-Combination");
    printf("\n(15)-Permutation");
    printf("\n(16)-Derivatives");
    printf("\n(17)-Complex Numbers");
    printf("\n(18)-Definite Integration");
    printf("\n(19)-Unit Conversions");
    printf("\n(20)-Constant Values\n");

    scanf("%d", &operation);

    switch (operation) {
        case 1: add(); break;
        case 2: sub(); break;
        case 3: mult(); break;
        case 4: div(); break;
        case 5: root(); break;
        case 6: square(); break;
        case 7: cube(); break;
        case 8: power(); break;
        case 9: percentage(); break;
        case 10: quadratic(); break;
        case 11: trignometry(); break;
        case 12: Logarithm(); break;
        case 13: exponential(); break;
        case 14: combination(); break;
        case 15: permutation(); break;
        case 16: derivative(); break;
        case 17: complex(); break;
        case 18: definite_integration(); break;
        case 19: unit_conversions_physics(); break;
        case 20: constants(); break;
        default: printf("Enter a valid number for operation\n");
    }
    return 0;
}


void add(void) {
    int a, b;
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);
    printf("Sum = %d\n", a + b);
}

void sub(void) {
    int a, b;
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);
    printf("Difference = %d\n", a - b);
}

void mult(void) {
    int a, b;
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);
    printf("Product = %d\n", a * b);
}

void div(void) {
    int a, b;
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);
    if (b != 0)
        printf("Quotient = %d\n", a / b);
    else
        printf("Error: Division by zero\n");
}
void root(void) {
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Square root of %.2f = %.2f\n", a, sqrt(a));
}

void square(void) {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Square of %d = %d\n", a, a * a);
}

void cube(void) {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Cube of %d = %d\n", a, a * a * a);
}

void power(void) {
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exp);
    printf("%.2lf ^ %.2lf = %.2lf\n", base, exp, pow(base, exp));
}

int percentage() {
    float totalMarks = 0, totalSubjects = 0, obtained, full;
    int n;
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter obtained marks for subject %d: ", i);
        scanf("%f", &obtained);
        printf("Enter total marks for subject %d: ", i);
        scanf("%f", &full);

        totalMarks += obtained;
        totalSubjects += full;
    }

    float percent = (totalMarks / totalSubjects) * 100;
    printf("Percentage = %.2f%%\n", percent);
    return 0;
}

void quadratic(void) {
    double a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2lf and %.2lf\n", root1, root2);
    } else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf and %.2lf\n", root1, root2);
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real, imag, real, imag);
    }
}
void trignometry(void) {
    double angle, radians;
    int choice;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    radians = angle * PI / 180.0;

    printf("\nChoose the trigonometric function to calculate:\n");
    printf("1. Sin\n2. Cos\n3. Tan\n4. Sec\n5. Cosec\n6. Cot\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("sin(%.2lf) = %.4lf\n", angle, sin(radians)); break;
        case 2: printf("cos(%.2lf) = %.4lf\n", angle, cos(radians)); break;
        case 3: printf("tan(%.2lf) = %.4lf\n", angle, tan(radians)); break;
        case 4: printf("sec(%.2lf) = %.4lf\n", angle, 1.0 / cos(radians)); break;
        case 5: printf("cosec(%.2lf) = %.4lf\n", angle, 1.0 / sin(radians)); break;
        case 6: printf("cot(%.2lf) = %.4lf\n", angle, 1.0 / tan(radians)); break;
        default: printf("Invalid choice.\n");
    }
}

int Logarithm() {
    double num, result;
    int choice;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Choose the type of logarithm:\n");
    printf("1. log base 10\n2. natural log (ln)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: result = log10(num); printf("log10(%.2lf) = %.4lf\n", num, result); break;
        case 2: result = log(num);   printf("ln(%.2lf) = %.4lf\n", num, result); break;
        default: printf("Invalid choice.\n");
    }
    return 0;
}

int exponential() {
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("e^%.2lf = %.4lf\n", x, exp(x));
    return 0;
}

void combination(void) {
    int n, r, nfac = 1, rfac = 1, nrfac = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++) nfac *= i;
    for (int i = 1; i <= r; i++) rfac *= i;
    for (int i = 1; i <= n - r; i++) nrfac *= i;

    int ncr = nfac / (rfac * nrfac);
    printf("Combination C(%d, %d) = %d\n", n, r, ncr);
}

void permutation(void) {
    int n, r, nfac = 1, nrfac = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++) nfac *= i;
    for (int i = 1; i <= n - r; i++) nrfac *= i;

    int npr = nfac / nrfac;
    printf("Permutation P(%d, %d) = %d\n", n, r, npr);
}
int derivative() {
    int choice, a, b, c, d;
    printf("Choose the type of equation:\n");
    printf("1. Linear (ax + b)\n");
    printf("2. Quadratic (ax² + bx + c)\n");
    printf("3. Cubic (ax³ + bx² + cx + d)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter coefficient a: ");
            scanf("%d", &a);
            printf("Derivative = %d\n", a);
            break;
        case 2:
            printf("Enter coefficients a and b: ");
            scanf("%d %d", &a, &b);
            printf("Derivative = %dx + %d\n", 2 * a, b);
            break;
        case 3:
            printf("Enter coefficients a, b, and c: ");
            scanf("%d %d %d", &a, &b, &c);
            printf("Derivative = %dx² + %dx + %d\n", 3 * a, 2 * b, c);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}

void complex() {
    int a, b, c, d;
    char op;
    printf("Enter real and imaginary part of first complex number (a b): ");
    scanf("%d %d", &a, &b);
    printf("Enter real and imaginary part of second complex number (c d): ");
    scanf("%d %d", &c, &d);
    printf("Choose operation (+, -, *): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': addComplex(a, b, c, d); break;
        case '-': subtractComplex(a, b, c, d); break;
        case '*': multiplyComplex(a, b, c, d); break;
        default: printf("Invalid operation\n");
    }
}

void addComplex(int a, int b, int c, int d) {
    printf("Result: %d + %di\n", a + c, b + d);
}

void subtractComplex(int a, int b, int c, int d) {
    printf("Result: %d + %di\n", a - c, b - d);
}

void multiplyComplex(int a, int b, int c, int d) {
    int real = a * c - b * d;
    int imag = a * d + b * c;
    printf("Result: %d + %di\n", real, imag);
}

int definite_integration() {
    int choice;
    float a, b, c, d, result = 0;
    float lower = 0, upper = 1;

    printf("Choose equation type:\n");
    printf("1. Quadratic (ax² + bx + c)\n");
    printf("2. Linear (ax + b)\n");
    printf("3. Cubic (ax³ + bx² + cx + d)\n");
    scanf("%d", &choice);

    printf("Enter coefficient a: "); scanf("%f", &a);
    printf("Enter coefficient b: "); scanf("%f", &b);
    if (choice >= 1) { printf("Enter coefficient c: "); scanf("%f", &c); }
    if (choice == 3) { printf("Enter coefficient d: "); scanf("%f", &d); }

    switch (choice) {
        case 1:
            result = (a / 3) * (upper * upper * upper - lower * lower * lower)
                   + (b / 2) * (upper * upper - lower * lower)
                   + c * (upper - lower);
            break;
        case 2:
            result = (a / 2) * (upper * upper - lower * lower)
                   + b * (upper - lower);
            break;
        case 3:
            result = (a / 4) * (pow(upper, 4) - pow(lower, 4))
                   + (b / 3) * (pow(upper, 3) - pow(lower, 3))
                   + (c / 2) * (upper * upper - lower * lower)
                   + d * (upper - lower);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Definite integral = %.4f\n", result);
    return 0;
}

int unit_conversions_physics() {
    int choice;
    double input;
    printf("Select conversion:\n");
    printf("1. Meters to Centimeters & Kilometers\n");
    printf("2. Kilograms to Grams & Pounds\n");
    printf("3. Celsius to Fahrenheit & Kelvin\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter meters: ");
            scanf("%lf", &input);
            printf("Centimeters: %.2lf cm\n", input * 100);
            printf("Kilometers: %.4lf km\n", input / 1000);
            break;
        case 2:
            printf("Enter kilograms: ");
            scanf("%lf", &input);
            printf("Grams: %.2lf g\n", input * 1000);
            printf("Pounds: %.2lf lbs\n", input * 2.20462);
            break;
        case 3:
            printf("Enter Celsius: ");
            scanf("%lf", &input);
            printf("Fahrenheit: %.2lf °F\n", (input * 9 / 5) + 32);
            printf("Kelvin: %.2lf K\n", input + 273.15);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}

int constants() {
    int choice;
    printf("Choose constant type:\n");
    printf("1. Physics Constants\n");
    printf("2. Chemistry Constants\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Speed of light = 3.00 x 10^8 m/s\n");
            printf("Gravitational constant = 6.67 x 10^-11 N·m²/kg²\n");
            printf("Planck’s constant = 6.63 x 10^-34 J·s\n");
            printf("Avogadro’s number = 6.022 x 10^23 mol⁻¹\n");
            break;
        case 2:
            printf("Gas constant R = 8.314 J/mol·K\n");
            printf("Faraday constant = 96,485 C/mol\n");
            printf("Electron mass = 9.109 x 10^-31 kg\n");
            printf("Proton mass = 1.673 x 10^-27 kg\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
