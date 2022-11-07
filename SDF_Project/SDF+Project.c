#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void intro(void)
{
    for(int x=0;x<25;x++)
    printf(" * ");
    printf("\n\n                 Welcome to our Application!              \n");
    printf("\n");
    printf("\n                     STUDENT`s HelpDesk                  \n\n");
    printf("                        Created By:-                     \n\n");
    printf("               Viplove Tyagi\tManan Garg\t\n\n");
    for(int x=0;x<25;x++)
    printf(" * ");
    printf("\n");
}

void menu(void)
{
    printf("\nWhich Sub-Application would you like to use? \n\n");
    printf("1.Calculator Cave\n\n2.Arcade Lounge\n\n3.Dome Of Productivity\n\n0.Exit\n");

}

void calcmenu(void)
{
    printf("\n\nWhich Kind of Calculator Would You Like to Summon? ");
    printf("\n\n1.Scientific\n\n2.Trigonometric\n\n3.Logarithmic\n\n0.Back\n\n");
    printf("Enter Your Choice: ");
}

void scicalcmenu(void)
{
    printf("\n\nPossible Set of Operations available:- \n\n");
    printf("1.Add\t\t2.Subtract\n\n3.Multiply\t4.Divide\n\n");
    printf("5.Modulus\t6.Inverse\n\n7.Factorial\t8.Nth Root\n\n");
    printf("9.Pi\t\t10.e\n\n11.nCr\t\t12.nPr\n\n0.Back\n\n");
    
}

void trigcalcmenu(void)
{
    printf("\n\nPossible Set of Operations available:- \n\n");
    printf("1.sin(x)\t\t2.cos(x)\t\t3.tan(x)\n\n");
    printf("4.cosec(x)\t\t5.sec(x)\t\t6.cot(x)\n\n");
    printf("7.arcsin(x)\t\t8.arccos(x)\t\t9.arctan(x)\n\n");
    printf("10.arccosec(x)\t\t11.arcsec(x)\t\t12.arccot(x)\n\n0.Back\n\n");
}

void logcalcmenu(void)
{
    printf("\n\nPossible Set of Operations available:- \n\n");
    printf("1.Natural Logarithm\t\t2.Natural AntiLog\n\n");
    printf("3.Decadic Logarithm\t\t4.Decadic AntiLog\n\n");
    printf("5.Custom Base Logarithm\t\t6.Custom Base AntiLog\n\n0.Back\n");

}

double add(double a, double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}

double multiply(double a, double b)
{
    return a*b;
}

double divide(double a, double b)
{
    return a/b;
}

int modulus(int a, int b)
{
    return a%b;
}

double inverse(double a)
{
    return 1/a;
}

int factorial(int a)
{   
    int fact=1;
    for(int i=1;i<=a;i++)
    fact*=i;
    return fact;
}

double Nth_Root(double a, double b)
{
    return pow(a,b);
}

double Pi(void)
{
    return 3.141592653589;
}

double e(void)
{
    return 2.718281828459;
}

int nCr(int a,int b)
{
    return factorial(a)/(factorial(b)*factorial(a-b));
}

int nPr(int a, int b)
{
    return factorial(a)/factorial(a-b);
}

float rad(float angle)
{
    return 0.0174533*angle;
}

float degrees( float angle)
{
    return 57.2958*angle;
}

float antilog(float base, float log)
{
    return pow(base,log);
}
int main()

{
    int choice;
    intro();
    while(1)
        {
            menu();
            printf("\nEnter Your Choice of Application: ");
            scanf("%d",&choice);

            if(choice==1){
                {
                    int calcchoice=1;
                    
                    while(calcchoice>0)
                    {
                        calcmenu();
                        scanf("%d",&calcchoice);

                        if(calcchoice==1)
                        
                        {
                            int opchoice,c,d;
                            double a, b;
                            scicalcmenu();
                            
                            while(opchoice!=0)
                            
                            {
                                printf("Enter Your Choice: "); 
                                scanf("%d",&opchoice);
                                
                                switch(opchoice)
                                
                                {
                                    case 1:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%lf %lf",&a,&b);
                                        printf("\n%lf + %lf = %lf\n\n",a,b,add(a,b));
                                        break;
                                    }
                                    
                                    case 2:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%lf %lf",&a,&b);
                                        printf("\n%lf - %lf = %lf\n\n",a,b,subtract(a,b));
                                        break;
                                    }
                                    
                                    case 3:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%lf %lf",&a,&b);
                                        printf("\n%lf * %lf = %lf\n\n",a,b,multiply(a,b));
                                        break;
                                    }
                                    
                                    case 4:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%lf %lf",&a,&b);
                                        printf("\n%lf / %lf = %lf\n\n",a,b,divide(a,b));
                                        break;
                                    }
                                    
                                    case 5:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%d %d",&c,&d);
                                        printf("\n%d %% %d = %d\n\n",c,d,modulus(c,d));
                                        break;
                                    }
                                    
                                    case 6:
                                    {
                                        printf("\nEnter A Number: ");
                                        scanf("%lf",&a);
                                        printf("\n(%lf)-1 = %lf\n\n",a,inverse(a));
                                        break;
                                    }
                                    
                                    case 7:
                                    {
                                        printf("\nEnter A Number: ");
                                        scanf("%d",&c);
                                        printf("\n(%d)! = %d\n\n",c,factorial(c));
                                        break;
                                    }
                                    
                                    case 8:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%lf %lf",&a,&b);
                                        printf("\n%lf^(%lf) = %lf\n\n",a,b,Nth_Root(a,b));
                                        break;
                                    }
                                    
                                    case 9:
                                    {
                                        printf("\nValue of Pi is: %lf\n\n",Pi());
                                        break;
                                    }
                                    
                                    case 10:
                                    {
                                        printf("\nValue of e is: %lf\n\n",e());
                                        break;
                                    }
                                    
                                    case 11:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%d %d",&c,&d);
                                        printf("\n%d C %d = %d\n\n",c,d,nCr(c,d));
                                        break;
                                    }
                                    
                                    case 12:
                                    {
                                        printf("\nEnter Two Numbers: ");
                                        scanf("%d %d",&c,&d);
                                        printf("\n%d P %d = %d\n\n",c,d,nPr(c,d));
                                        break;
                                    }
                                    
                                }
                            }
                        }
                        
                        else if(calcchoice==2)
                        
                        {
                            int opchoice;
                            float angle,val;
                            trigcalcmenu();
                            
                            while(opchoice!=0)
                            
                            {
                                printf("Enter Your Choice: "); 
                                scanf("%d",&opchoice);
                                
                                switch(opchoice)
                                
                                {
                                    case 1:
                                    {
                                        printf("\nEnter Angle (in Degrees): ");
                                        scanf("%f",&angle);
                                        printf("\nsin(%.3f)⁰ = %.3f\n\n",angle,sin(rad(angle)));
                                        break;
                                    }
                                    
                                    case 2:
                                    {
                                        printf("\nEnter Angle (in Degrees): ");
                                        scanf("%f",&angle);
                                        printf("\ncos(%.3f)⁰ = %.3f\n\n",angle,cos(rad(angle)));
                                        break;
                                    }
                                    
                                    case 3:
                                    {
                                        printf("\nEnter Angle (in Degrees): ");
                                        scanf("%f",&angle);
                                        printf("\ntan(%.3f)⁰ = %.3f\n\n",angle,tan(rad(angle)));
                                        break;
                                    }
                                    
                                    case 4:
                                    {
                                        printf("\nEnter Angle (in Degrees): ");
                                        scanf("%f",&angle);
                                        printf("\ncosec(%.3f)⁰ = %.3f\n\n",angle,inverse(sin(rad(angle))));
                                        break;
                                    }
                                    
                                    case 5:
                                    {
                                        printf("\nEnter Angle (in Degrees): ");
                                        scanf("%f",&angle);
                                        printf("\nsec(%.3f)⁰ = %.3f\n\n",angle,inverse(cos(rad(angle))));
                                        break;
                                    }
                                    
                                    case 6:
                                    {
                                        printf("\nEnter Angle (in Degrees): ");
                                        scanf("%f",&angle);
                                        printf("\ncot(%.3f)⁰ = %.3f\n\n",angle,inverse(tan(rad(angle))));
                                        break;
                                    }
                                    
                                    case 7:
                                    {
                                        printf("\nEnter Value: ");
                                        scanf("%f",&val);
                                        printf("\narcsin(%f) = %f Degrees\n\n",val,degrees(asin(val)));
                                        break;
                                    }
                                    
                                    case 8:
                                    {
                                        printf("\nEnter Value: ");
                                        scanf("%f",&val);
                                        printf("\narccos(%f) = %f Degrees\n\n",val,degrees(acos(val)));
                                        break;
                                    }
                                    
                                    case 9:
                                    {
                                        printf("\nEnter Value: ");
                                        scanf("%f",&val);
                                        printf("\narctan(%f) = %f Degrees\n\n",val,degrees(atan(val)));
                                        break;
                                    }
                                    
                                    case 10:
                                    {
                                        printf("\nEnter Value: ");
                                        scanf("%f",&val);
                                        printf("\narccosec(%f) = %f Degrees\n\n",val,degrees(asin(inverse(val))));
                                        break;
                                    }
                                    
                                    case 11:
                                    {
                                        printf("\nEnter Value: ");
                                        scanf("%f",&val);
                                        printf("\narcsec(%f) = %f Degrees\n\n",val,degrees(acos(inverse(val))));
                                        break;
                                    }
                                    
                                    case 12:
                                    {
                                        printf("\nEnter Value: ");
                                        scanf("%f",&val);
                                        printf("\narccot(%f) = %f Degrees\n\n",val,degrees(atan(inverse(val))));
                                        break;
                                    }
                                    
                                }
                            }
                        }

                        else if(calcchoice==3)
                        
                        {
                            float base,argument,log;
                            int oc=1;
                            logcalcmenu();
                            while(oc>0)
                            {
                                printf("\nEnter your Choice: ");
                                scanf("%d",&oc);
                                switch(oc)
                                {
                                    case 1:
                                    {
                                        printf("\nEnter the Argument: ");
                                        scanf("%f",&argument);
                                        printf("\nThe Natural Logarithm of %f is = %f\n",argument,log10(argument)/log10(e()));
                                        break;
                                    }
                                    
                                    case 2:
                                    {
                                        printf("\nEnter the LogValue: ");
                                        scanf("%f",&log);
                                        printf("\nThe Natural AntiLog of %f is = %f\n",log,antilog(e(),log));
                                        break;
                                    }
                                    
                                    case 3:
                                    {
                                        printf("\nEnter the Argument: ");
                                        scanf("%f",&argument);
                                        printf("\nThe Decadic Logarithm of %f is = %f\n",argument,log10(argument));
                                        break;
                                    }
                                    
                                    case 4:
                                    {
                                        printf("\nEnter the LogValue: ");
                                        scanf("%f",&log);
                                        printf("\nThe Decadic AntiLog of %f is = %f\n",log,antilog(10,log));
                                        break;
                                    }
                                    
                                    case 5:
                                    {
                                        printf("\nEnter the base and the Argument: ");
                                        scanf("%f %f",&base,&argument);
                                        printf("\nThe Logarithm of %f to the base %f is = %f\n",argument,base,(log10(argument)/log10(base)));
                                        break;
                                    }
                                    
                                    case 6:
                                    {
                                        printf("\nEnter the LogValue and the Base: ");
                                        scanf("%f %f",&log,&base);
                                        printf("\nThe AntiLog of %f with base %f is = %f\n",log,base,antilog(base,log));
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }

            else if(choice==0)
            {
                printf("\nThanks For Using Our Application !!\n\n");
                printf("Closing Now.....\n\n");
                exit(0);

            }  
        
        }

    return 0;
}