int main()
{
    int num1,num2;
    float num3,num4;
    scanf("%d %d", &num1, &num2);
    scanf("\n%f %f", &num3, &num4); // \n in scanf function is used for taking input at a new line
    printf("%d %d\n",num1+num2,num1-num2);
    printf("%.1f %.1f",num3+num4,num3-num4);
    
	
    
    return 0;}