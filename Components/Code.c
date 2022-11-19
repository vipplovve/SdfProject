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
    printf("           Viplove Tyagi   Manan Garg   Garima Bharti\n\n");
    for(int x=0;x<25;x++)
    printf(" * ");
    printf("\n");
}

void menu(void)
{
    printf("\nWhich Sub-Application would you like to use? \n\n");
    printf("1.Calculator Cave.\n\n2.Problem Solver.\n\n3.Library of Resources.\n\n0.Exit\n");

}

void calcmenu(void)
{
    printf("\n\nWhich Kind of Calculator Would You Like to Summon? ");
    printf("\n\n1.Scientific\n\n2.Trigonometric\n\n3.Logarithmic\n\n0.Back\n\n");
    printf("Enter Your Choice: ");
}

void probmenu(void)
{
    printf("\n\nWhich Kind of Problem Solver Would You Like to Summon? ");
    printf("\n\n1.Mathematics Related.\n\n2.Physics Related.\n\n0.Back\n\n");
    printf("Enter Your Choice: ");
}

void libmenu(void)
{
    printf("\n\nWhat kind of resources would you like to access? ");
    printf("\n\n1.Academics Related Books.\n\n2.Music Playlists.\n\n3.Self-Improvement Books.\n\n0.Back\n\n");
    printf("Enter Your Choice: ");
}

void academic(void)
{
    printf("\n\nList of Books available:- \n\n");
    printf("1.Optics\n\n2.Let Us C\n\n");
    printf("3.Linear Algebra\n\n4.Ordinary & Partial Differential Equations\n\n");
    printf("0.Back\n\n");
    printf("Enter Your Choice: ");
}

void music(void)
{
    printf("\n\nAvailable Playlists:- \n\n");
    printf("1.jet black.\n\n");
    printf("2.neon purple.\n\n");
    printf("3.sounds. from. the nether. & eden.\n\n");
    printf("4.hiphop mix\n\n");
    printf("0.Back\n\n");
    printf("Enter Your Choice: ");
}

void selfimp(void)
{
    printf("\n\nList of Books available:- \n\n");
    printf("1.Rich Dad, Poor Dad\n\n2.Thinking, Slow and Fast\n\n");
    printf("3.The Subtle Art of not Giving a F*ck\n\n4.Sun Tzu's Art of War\n\n");
    printf("5.Atomic Habits\n\n6.Man's Search For Meaning\n\n");
    printf("0.Back\n\n");
    printf("Enter Your Choice: ");
}

void mathmenu(void)
{
    printf("\n\nPossible Set of Operations available:- \n\n");
    printf("1.A.P. Sum\n\n2.G.P. Sum\n\n");
    printf("3.Quadratic Equations\n\n4.Matrices and Determinants\n\n");
    printf("5.Area and Perimeter of 2D Figures\n\n");
    printf("6.Volume and Surface Area of 3D Figures\n\n0.Back\n\n");
}

void twoDmenu(void)
{
    printf("\n\nPossible 2D Figures available:- \n\n");
    printf("1.Square\n\n2.Rectangle\n\n3.Equilateral Triangle\n\n");
    printf("4.Circle\n\n5.Ellipse\n\n0.Back\n\n");
}

void threeDmenu(void)
{
    printf("\n\nPossible 3D Figures available:- \n\n");
    printf("1.Cube\n\n2.Cuboid\n\n3.Right Circular Cone\n\n");
    printf("4.Sphere\n\n0.Back\n\n");
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
    return pow(a,inverse(b));
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


float ap(float a,float d,float n)
{
    return ((n/2)*((2*a)+((n-1)*d)));
}

float gp(int a,int r,int n)
{
    int temp=1;
    float sum=0;
    for (int i = 0; i < n; i++)
    {
      sum = sum + temp;		
      temp = temp * r;		
    }
    return sum;
}

int main()

{
    int choice=1;
    intro();
    while(choice!=0)
        {
            menu();
            printf("\nEnter Your Choice of Application: ");
            scanf("%d",&choice);
    
            if(choice==1)
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
            
            else if(choice==2)
            {
                int probchoice=1;
                while(probchoice!=0)
                {
                    probmenu();
                    scanf("%d",&probchoice);
                    switch(probchoice)
                    {
                        case 1:
                        {
                            mathmenu();
                            int mathchoice=1;
                            while(mathchoice!=0)
                            {
                                printf("Enter Your Choice: ");
                                scanf("%d",&mathchoice);
                                switch(mathchoice)
                                {
                                    case 1:
                                    {
                                        float a,d,n;
                                        printf("\nEnter 1st Term, Common Difference and No. of Terms: ");
                                        scanf("%f %f %f",&a,&d,&n);
                                        printf("\nThe Sum is: %f\n\n",ap(a,d,n));
                                        break;
                                    }
                                    
                                    case 2:
                                    {
                                        int a,r, n;
                                        printf("\nEnter 1st Term, Common Quotient and No. of Terms: ");
                                        scanf("%d %d %d",&a,&r,&n);
                                        printf("\nThe Sum is: %.3f\n\n",gp(a,r,n));
                                        break;
                                    }

                                    case 3:
                                    {
                                        float a,b,c;
                                        int i;
                                        float s1,s2,d;
                                        printf("\nEnter Values of A,B and C as in (Ax^2 +Bx +C=0): ");
                                        scanf("%f %f %f",&a,&b,&c);
                                        
                                        d=(b*b)-(4*a*c);
                                        
                                        if(d<0)
                                            i=1;
                                        
                                        else if(d>0)
                                            i=2;
                                        
                                        else
                                            i=3;
                                        
                                        switch(i)
                                        {
                                        
                                        case 1:
                                            d=sqrt(-d);
                                            s1=(b)/2*a;
                                            s2=(d)/2*a;
                                            printf("\n\nThe Complex Solutions to this Equation are:- \n");
                                            printf("\n%.2f + %.2f i \n",s1,s2);
                                            printf("\n%.2f - %.2f i \n\n",s1,s2);

                                            break;

                                        case 2:
                                            d=sqrt(d);
                                            s1=(b)/2*a;
                                            s2=(d)/2*a;
                                            printf("\n\nThe Solutions to this Equation are:- \n");
                                            printf("\n%.2f \n\n",s1-s2);
                                            printf("\n%.2f \n\n ",s1+s2);
                                            break;

                                        case 3:
                                            printf("\n\nThe solutions to this Equation Coincide and they are: \n");
                                            printf("\n%.2f and %.2f\n\n",-b/2*a,-b/2*a);
                                            break;

                                        }
                                        break;
                                    }

                                    case 4:
                                    {
                                        int choice=1;
                                        printf("\nWhich Operation would you like to use? \n");
                                        printf("1. Matrix Addition\n\n2. Matrix Subtraction\n\n3. Scalar Multiplication\n\n");
                                        printf("4. Matrix Multiplication\n\n5. Transpose Calculation(for Square Matrices)\n\n0.Back\n\n");
                                        
                                        while(choice!=0)
                                        {
                                            printf("\nWhich Operation would you like to use? ");
                                            scanf("%d",&choice);

                                            switch(choice)
                                            {
                                                case 1: //matrix addition
                                                {int r1,r2,c2,c1;
                                                printf("\nEnter order of Matrix #1: ");
                                                scanf("%d %d",&r1,&c1);
                                                int arr1[r1][c1];
                                                for(int x=0;x<=r1-1;x++)
                                                {
                                                    for(int y=0;y<=c1-1;y++)
                                                    scanf("%d",&arr1[x][y]);

                                                }
                                                printf("\n");
                                                printf("\nEnter order of Matrix #2: ");
                                                scanf("%d %d",&r2,&c2);
                                                int arr2[r2][c2];
                                                for(int x=0;x<=r2-1;x++)
                                                {
                                                    for(int y=0;y<=c2-1;y++)
                                                    scanf("%d",&arr2[x][y]);

                                                }
                                                int ans[r1][c1];
                                                for(int x=0;x<=r2-1;x++)
                                                {
                                                    for(int y=0;y<=c2-1;y++)
                                                    ans[x][y]=arr1[x][y]+arr2[x][y];
                                                }
                                                printf("\n");
                                                printf("The solution Matrix is:- \n\n");
                                                for(int x=0;x<=r2-1;x++)
                                                {
                                                    for(int y=0;y<=c2-1;y++)
                                                    printf("%d ",ans[x][y]);

                                                    printf("\n");
                                                }
                                                printf("\n");
                                                }
                                                break;
                                                case 2: // matrix subtraction
                                                {
                                                int r1,r2,c2,c1;
                                                printf("\nEnter order of Matrix #1: ");
                                                scanf("%d %d",&r1,&c1);
                                                int arr1[r1][c1];
                                                for(int x=0;x<=r1-1;x++)
                                                {
                                                    for(int y=0;y<=c1-1;y++)
                                                    scanf("%d",&arr1[x][y]);

                                                }
                                                printf("\n");
                                                printf("\nEnter order of Matrix #2: ");
                                                scanf("%d %d",&r2,&c2);
                                                int arr2[r2][c2];
                                                for(int x=0;x<=r2-1;x++)
                                                {
                                                    for(int y=0;y<=c2-1;y++)
                                                    scanf("%d",&arr2[x][y]);

                                                }
                                                printf("\n");
                                                int ans[r1][c1];
                                                for(int x=0;x<=r2-1;x++)
                                                {
                                                    for(int y=0;y<=c2-1;y++)
                                                    ans[x][y]=arr1[x][y]-arr2[x][y];
                                                }
                                                printf("\n");
                                                printf("\nThe solution Matrix is:- \n\n");
                                                for(int x=0;x<=r2-1;x++)
                                                {
                                                    for(int y=0;y<=c2-1;y++)
                                                    printf("%d ",ans[x][y]);

                                                    printf("\n");
                                                }
                                                printf("\n");
                                                }
                                                break;

                                                case 3: //scalar multiplication
                                                {
                                                int r1,c1,k;
                                                printf("\nEnter order of Matrix: ");
                                                scanf("%d %d",&r1,&c1);
                                                int arr1[r1][c1];

                                                for(int x=0;x<=r1-1;x++)
                                                {
                                                    for(int y=0;y<=c1-1;y++)
                                                    scanf("%d",&arr1[x][y]);

                                                }
                                                
                                                printf("\n");
                                                printf("\nEnter value of scalar: ");
                                                scanf("%d",&k);
                                                printf("\n");
                                                for(int x=0;x<=r1-1;x++)
                                                {
                                                    for(int y=0;y<=c1-1;y++)
                                                    arr1[x][y]=arr1[x][y]*k;
                                                }
                                                printf("\n");
                                                printf("\nThe solution Matrix is:- \n\n");
                                                for(int x=0;x<=r1-1;x++)
                                                {
                                                    for(int y=0;y<=c1-1;y++)
                                                    printf("%d ",arr1[x][y]);

                                                    printf("\n");
                                                }
                                                printf("\n");
                                                }
                                                break;

                                                case 4:
                                                {
                                                    int r1,z,c2;
                                                    printf("\nEnter order of Matrix #1: ");
                                                    scanf("%d %d",&r1,&z);
                                                    int arr1[r1][z];
                                                    for(int x=0;x<=r1-1;x++)
                                                    {
                                                        for(int y=0;y<=z-1;y++)
                                                        scanf("%d",&arr1[x][y]);

                                                    }
                                                    printf("\n");
                                                    printf("\nEnter order of Matrix #2: ");
                                                    scanf("%d %d",&z,&c2);
                                                    int arr2[z][c2];
                                                    for(int x=0;x<=z-1;x++)
                                                    {
                                                        for(int y=0;y<=c2-1;y++)
                                                        scanf("%d",&arr2[x][y]);

                                                    }
                                                    printf("\n");
                                                    int ans[r1][c2];
                                                    for(int x=0;x<=r1-1;x++)
                                                    {
                                                        for(int y=0;y<=c2-1;y++)
                                                        ans[x][y]=0;

                                                    }
                                                    for(int a=0;a<r1;a++)
                                                    {
                                                        for(int b=0;b<c2;b++)
                                                        {
                                                            for(int c=0;c<z;c++)
                                                            {
                                                                ans[a][b]+=arr1[a][c]*arr2[c][b];
                                                            }
                                                        }
                                                    }
                                                    printf("\nThe Solution Matrix is:- \n\n");
                                                    for(int x=0;x<=r1-1;x++)
                                                    {
                                                        for(int y=0;y<=c2-1;y++)
                                                        printf("%d ",ans[x][y]);

                                                        printf("\n");
                                                    }
                                                    printf("\n");

                                                    }
                                                    break;

                                                case 5:
                                                {
                                                    int r,c;
                                                    printf("\nEnter order of Matrix: ");
                                                    scanf("%d %d",&r,&c);
                                                    int arr[r][c];
                                                    for(int x=0;x<=r-1;x++)
                                                    {
                                                        for(int y=0;y<=c-1;y++)
                                                        scanf("%d",&arr[x][y]);

                                                    }
                                                    printf("\n");
                                                    
                                                    for(int x=0;x<r;x++) //swapping non diagonal elements.
                                                    {
                                                        for(int y=x;y<c;y++)
                                                        {
                                                            int var=arr[x][y];
                                                            arr[x][y]=arr[y][x];
                                                            arr[y][x]=var;

                                                        }
                                                    }

                                                    printf("\nThe Transposed Matrix is:- \n\n");
                                                    for(int x=0;x<=r-1;x++)
                                                    {
                                                        for(int y=0;y<=c-1;y++)
                                                        printf("%d ",arr[x][y]);

                                                        printf("\n");
                                                    }
                                                    printf("\n");

                                                    }
                                                    break;
                        
                                            }
                                        }
                                        break;
                                    }

                                    case 5:

                                    {
                                        
                                        int twodchoice=1;
                                        while(twodchoice!=0)
                                        {
                                            twoDmenu();
                                            printf("Enter Your Choice: ");
                                            scanf("%d",&twodchoice);
                                            switch(twodchoice)
                                            {
                                                case 1:
                                                {
                                                    float side;
                                                    printf("\nEnter Side of the Square: ");
                                                    scanf("%f",&side);
                                                    printf("\nArea is: %.3f sq. units.\n",side*side);
                                                    printf("\nPerimeter is: %.3funits.\n\n",4*side);
                                                    break;
                                                }

                                                case 2:
                                                {
                                                    float l,b;
                                                    printf("\nEnter Sides of the Rectangle: ");
                                                    scanf("%f %f",&l,&b);
                                                    printf("\nArea is: %.3f sq. units.\n",l*b);
                                                    printf("\nPerimeter is: %.3f units.\n\n",2*(l+b));
                                                    break;
                                                }

                                                case 3:
                                                {
                                                    float side;
                                                    printf("\nEnter Side of the Equilateral Triangle: ");
                                                    scanf("%f",&side);
                                                    printf("\nArea is: %.3f sq. units.\n",(side*side)*(1.732)/4);
                                                    printf("\nPerimeter is: %.3f units.\n\n",3*side);
                                                    break;
                                                }

                                                case 4:
                                                {
                                                    float r;
                                                    printf("\nEnter Radius of the Circle: ");
                                                    scanf("%f",&r);
                                                    printf("\nArea is: %.3f sq. units.\n",Pi()*r*r);
                                                    printf("\nCircumference is: %.3f units.\n\n",2*Pi()*r);
                                                    break;
                                                }

                                                case 5:
                                                {
                                                    float a,b;
                                                    printf("\nEnter Semi-Major and Semi-Minor Axes of the Ellipse: ");
                                                    scanf("%f %f",&a,&b);
                                                    printf("\nArea is: %.3f sq. units.\n",Pi()*a*b);
                                                    printf("\nPerimeter is: %.3f units.\n\n",(2*Pi())*Nth_Root((((a*a)+(b*b))/2),2));
                                                    break;
                                                }

                                            }
                                        }
                                        break;
                                    }
                                    case 6:
                                    {
                                        
                                        int threedchoice=1;
                                        while(threedchoice!=0)
                                        {
                                            threeDmenu();
                                            printf("Enter Your Choice: ");
                                            scanf("%d",&threedchoice);
                                            switch(threedchoice)
                                            {
                                                case 1:
                                                {
                                                    float e;
                                                    printf("\nEnter Edge of the Cube: ");
                                                    scanf("%f",&e);
                                                    printf("\nVolume is: %.3f cubic units.\n",e*e*e);
                                                    printf("\nTotal Surface Area is: %.3f sq. units.\n\n",6*e*e);
                                                    break;
                                                }

                                                case 2:
                                                {
                                                    float l,b,h;
                                                    printf("\nEnter Length, Breadth and Height of the Cuboid: ");
                                                    scanf("%f %f %f",&l,&b,&h);
                                                    printf("\nVolume is: %.3f cubic units.\n",l*b*h);
                                                    printf("\nTotal Surface Area is: %.3f sq. units.\n\n",2*((l*b)+(l*h)+(b*h)));
                                                    break;
                                                }

                                                case 3:
                                                {
                                                    float r,h;
                                                    printf("\nEnter Radius and Height of the cone: ");
                                                    scanf("%f %f",&r,&h);
                                                    printf("\nVolume is: %.3f cubic units.\n",(Pi()*r*r*h)/3);
                                                    printf("\nTotal Surface Area is: %.3f sq. units.\n\n",(Pi()*r*r)+(2*Pi()*r*h));
                                                    break;
                                                }

                                                case 4:
                                                {
                                                    int r;
                                                    printf("\nEnter Radius of the Sphere ");
                                                    scanf("%d",&r);
                                                    printf("\nVolume is: %.3f cubic units.\n",(Pi()*r*r*r)*4/3);
                                                    printf("\nCircumference is: %.3f units.\n\n",4*Pi()*r*r);
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                            }  
                        break;
                        }

                    }
                }

            }

            else if(choice==3)
            {
                int libchoice=1;
                while(libchoice!=0)
                {
                    libmenu();
                    scanf("%d",&libchoice);
                    switch(libchoice)
                    {
                        case 1:
                        {
                            int academicchoice=1;
                            while(academicchoice!=0)
                            {
                                academic();
                                scanf("%d",&academicchoice);
                                switch(academicchoice)
                                {
                                    case 1:
                                    printf("\nhttps://drive.google.com/file/d/1gw-7l9z4JDAuZOBQXjQiiBIQlByS73Hp/view?usp=sharing");
                                    break;
                                    case 2:
                                    printf("\nhttps://drive.google.com/file/d/1F0Agu8e0sI552SxpfysUZk8F4Pts6hyI/view?usp=sharing");
                                    break;
                                    case 3:
                                    printf("\nhttps://drive.google.com/file/d/16gLvTnY2pseQfsERFZ5ybAsyeX4-58Ll/view?usp=sharing");
                                    break;
                                    case 4:
                                    printf("\nhttps://drive.google.com/file/d/1MuXC5GQ6ril3EupgNcA9-8XnnhSlyxrZ/view?usp=sharing");
                                    break;
                                }
                            }
                            break;
                        }

                        case 2:
                        {
                            int musicchoice=1;
                            while(musicchoice!=0)
                            {
                                music();
                                scanf("%d",&musicchoice);
                                switch(musicchoice)
                                {
                                    case 1:
                                    printf("\nhttps://open.spotify.com/playlist/2A5EY72mw8MdwKtSEf7Hvt?si=9048f10fd705407d");
                                    break;
                                    case 2:
                                    printf("\nhttps://open.spotify.com/playlist/2GlDNYgC0UQ05crcQH2OEp?si=589d28f69c1c4388");
                                    break;
                                    case 3:
                                    printf("\nhttps://open.spotify.com/playlist/57iPlqzuRosjdBVKUgheWx?si=e3e6f23789104173");
                                    break;
                                    case 4:
                                    printf("\nhttps://open.spotify.com/playlist/37i9dQZF1EQnqst5TRi17F?si=e47e875fe8b243d9");
                                    break;
                                }
                            }
                            break;
                        }

                        case 3:
                        {
                            int selfchoice=1;
                            while(selfchoice!=0)
                            {
                                selfimp();
                                scanf("%d",&selfchoice);
                                switch(selfchoice)
                                {
                                    case 1:
                                    printf("\nhttps://drive.google.com/file/d/10sipZMSqVLIHVrqoHAenMa_Sd8LRg63_/view?usp=sharing");
                                    break;
                                    case 2:
                                    printf("\nhttps://drive.google.com/file/d/1X_xeieI_KUJZOAoaazrAO3cgG0dIzNTt/view?usp=sharing");
                                    break;
                                    case 3:
                                    printf("\nhttps://drive.google.com/file/d/1DFVarrP3PD4ED8XysxKxFKMz-W_TUJYj/view?usp=sharing");
                                    break;
                                    case 4:
                                    printf("\nhttps://drive.google.com/file/d/1_KO-mpK5kbA2iNXdcdF6oDXBXHneXTZ_/view?usp=sharing");
                                    break;
                                    case 5:
                                    printf("\nhttps://drive.google.com/file/d/13_QRDibCftYDZ8zyg11db24g89ecqR83/view?usp=sharing");
                                    break;
                                    case 6:
                                    printf("\nhttps://drive.google.com/file/d/1sDw4n4ifdGhBRe3pIpMHOqtU8HPXK3v7/view?usp=sharing");
                                    break;
                                }
                            }
                            break;
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