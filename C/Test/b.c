void main()
{
int a[3]={1,2,3};
int i;
int *p[3]; /*Array of pointers*/
for(i=0; i<3; i++)
p[i]=&a[i];
for(i=0; i<3; i++)
printf("%u\n%d\n", p[i], *p[i]);
}