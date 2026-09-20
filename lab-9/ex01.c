#include <stdio.h>
#define PI 3.14
float B_Area(float r);
float S_Area(float r, float h);
float V_Area(float r, float h);

int main()
{
    float rad, height, base, surface, volume;
    do {
        printf("Enter radius and height in cm: ");
        scanf("%f %f", &rad, &height);
        
        if (rad <= 0 || height <= 0)
        {

            printf("Error: Radius and height must be greater than 0.\n");
        }
        
    } while (rad <= 0 || height <= 0); 
    
    base = B_Area(rad);
    printf("Base Area: %.2f\n", base);
    
    surface = S_Area(rad, height);
    printf("Surface Area: %.2f\n", surface);
    
    volume = V_Area(rad, height);
    printf("Volume: %.2f\n", volume);
    
    return 0;
}

float B_Area(float r)
{
    float b_ans;
    b_ans = PI * (r * r);
    return b_ans;
}

float S_Area(float r, float h)
{
    float s_ans;
    s_ans = 2 * PI * r * (r + h);
    return s_ans;
}

float V_Area(float r, float h)
{
    float V_ans;
    V_ans = PI * (r * r) * h;
    return V_ans;
}