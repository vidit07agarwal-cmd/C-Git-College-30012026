#include <stdio.h>
int main(void)
{
    printf("Hello, World!\n");
    return 0;
}

#include <stdio.h>
int main(void)
{
    int age;
    float height;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in cm): ");
    scanf("%f", &height);
    printf("\nYou entered:\n");
    printf("Age = %d\n", age);
    printf("Height = %.2f cm\n", height);
    return 0;
}

#include <stdio.h>
int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Sum = %.2f\n", a + b);
    return 0;
} 

#include <stdio.h>
int main(void)
{
    double r;
    const double pi = 3.141592653589793;
    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Area = %.2f\n", pi * r * r);
    printf("Circumference = %.2f\n", 2 * pi * r);
    return 0;
}

#include <stdio.h>

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    if (b == 0)
        printf("Division = not possible (division by zero)\n");
    else
        printf("Division = %.2f\n", a / b);
    return 0;
}


#include <stdio.h>
int main(void)
{
    double u, a, t, b, c, p;
    double v, S, Z, H;
    printf("Enter u, a, t: ");
    scanf("%lf %lf %lf", &u, &a, &t);
    printf("Enter b, c, p: ");
    scanf("%lf %lf %lf", &b, &c, &p);
    v = u + a * t;
    S = u * t + 0.5 * a * t * t;
    if (b == 0)
        Z = 0;
    else
        Z = (2 * a) + (v / b) + (9 * c);
    H = v * v + p * p;
    printf("\n(i)  v = u + a*t = %.2f\n", v);
    printf("(ii) S = u*t + 1/2*a*t^2 = %.2f\n", S);
    if (b == 0)
        printf("(iii) Z = 2*a + v/b + 9*c = not possible (b = 0)\n");
    else
        printf("(iii) Z = 2*a + v/b + 9*c = %.2f\n", Z);
    printf("(iv) H = v^2 + p^2 = %.2f\n", H);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int x, y, temp;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap using temp: x=%d y=%d\n", x, y);
    printf("Enter x and y again: ");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap without temp: x=%d y=%d\n", x, y);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int a, b, c, max1, max2;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max1 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    max2 = a;
    if (b > max2) max2 = b;
    if (c > max2) max2 = c;
    printf("Greatest using ?: %d\n", max1);
    printf("Greatest using if-else: %d\n", max2);
    return 0;
}

#include <stdio.h>

int main(void)
{
    char ch;
    int n;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    switch (ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n > 0 ? 1 : (n < 0 ? -1 : 0))
    {
        case 1:  printf("Positive\n"); break;
        case -1: printf("Negative\n"); break;
        default: printf("Zero\n");
    }
    return 0;
}

#include <stdio.h>

int main(void)
{
    int n, i = 1;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int n, original, digitCount = 0;
    long long sum = 0;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    if (temp == 0) digitCount = 1;
    while (temp != 0)
    {
        digitCount++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        long long power = 1;
        for (int i = 0; i < digitCount; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}

#include <stdio.h>

int main(void)
{
    long long n, temp, reverse = 0;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    temp = n;
    if (temp == 0)
    {
        digits = 1;
        reverse = 0;
    }
    else
    {
        while (temp != 0)
        {
            digits++;
            reverse = reverse * 10 + (temp % 10);
            temp /= 10;
        }
    }
    printf("Digits = %d\n", digits);
    printf("Reverse = %lld\n", reverse);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int n;
    long long a = 0, b = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    if (n <= 0)
        return 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%lld", a);
        if (i != n) printf(" ");
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main()
{
    int i, j;
//A    printf("Pattern (a):\n");
    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    // Pattern (b) - Right aligned triangle
    printf("Pattern (b):\n");
    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6 - i; j++)
            printf("  ");
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30};
    int n = 3, i, pos, value, found = 0;
    // Display initial array
    printf("Initial array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    // INSERT (insert 25 at position 2)
    value = 25;
    pos = 1;  // index 1 = position 2

    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;
    printf("After inserting 25 at position 2:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    // UPDATE (change position 3 to 99)
    arr[2] = 99;
    printf("After updating position 3 to 99:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    // DELETE (delete element at position 1)
    pos = 0;
    for(i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("After deleting position 1:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    // SEARCH (search for 99)
    value = 99;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            printf("Element 99 found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Element not found\n");
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0, i;
    for(i = 0; i < 5; i++)
        sum += arr[i];
    printf("Sum of array elements = %d", sum);
    return 0;
}


#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("Resultant matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10];
    int r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            transpose[j][i] = a[i][j];
    printf("Transpose of matrix:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    int choice;
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    while(1)
    {
        printf("\n--- String Functions Menu ---\n");
        printf("1. Find length of string\n");
        printf("2. Concatenate strings\n");
        printf("3. Copy string\n");
        printf("4. Compare strings\n");
        printf("5. Reverse string\n");
        printf("-1. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // clear newline from buffer
        if(choice == -1)
        {
            printf("Exiting program...\n");
            break;
        }
        switch(choice)
        {
            case 1:
                printf("Length of first string = %lu\n", strlen(str1) - 1);
                break;
            case 2:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s", temp);
                break;
            case 3:
                strcpy(temp, str1);
                printf("Copied string = %s", temp);
                break;
            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;
            case 5:
                strcpy(temp, str1);
                printf("Reverse of first string = %s\n", strrev(temp));
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}


#include <stdio.h>
#include <math.h>
int prime(int n)
{ int i;
    if(n <= 1)
        return 0;
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }  return 1;
} int armstrong(int n)
{ int sum = 0, temp = n, r;
    while(temp > 0)
    {  r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }  if(sum == n)
        return 1;
    else
        return 0;
}int perfect(int n)
{int i, sum = 0;
    for(i = 1; i <= n/2; i++)
    { if(n % i == 0)
            sum += i;
    } if(sum == n)
        return 1;
    else
        return 0;
}




int main()
{ int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(prime(num))
        printf("The number is Prime\n");
    else
        printf("The number is not Prime\n");
    if(armstrong(num))
        printf("The number is Armstrong\n");
    else
        printf("The number is not Armstrong\n");
    if(perfect(num))
        printf("The number is Perfect\n");
    else
        printf("The number is not Perfect\n");
    return 0;
}

#include <stdio.h>
float area(float r)
{
    return 3.14 * r * r;
}
float circumference(float r)
{
    return 2 * 3.14 * r;
}
int main()
{
    float radius;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", area(radius));
    printf("Circumference of circle = %.2f\n", circumference(radius));
    return 0;
}

#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping inside function:\n");
    printf("a = %d, b = %d\n", a, b);
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After function call:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
