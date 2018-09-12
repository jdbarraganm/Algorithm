#include <stdio.h>

long long fiboLongLong(long long n){
    long long a=0;
    long long b=1;
for(long long i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
short fiboShort(short n){
    short a=0;
    short b=1;
for(short i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
int fiboInt(int n){
    int a=0;
    int b=1;
for(int i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
float fiboFloat(float n){
    float a=0;
    float b=1;
for(float i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
long fiboLong(long n){
    long a=0;
    long b=1;
for(long i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
double fiboDouble(double n){
    double a=0;
    double b=1;
for(double i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
long double fiboLongDouble(long double n){
    long double a=0;
    long double b=1;
for(long double i=2;i<=n;i++){
    b+=a;
    a=b-a;
}
if(n==0){
    printf("%lld",a);
}else if(n==1){
    printf("%lld",b);
}else
    printf("%lld",b);

}
main(){
    printf("n: %i, fiboShort: %i\n", 24, fiboShort(24));
    printf("n: %i, fiboInt: %i\n", 47, fiboInt(47));
    printf("n: %i, fiboFloat: %f\n", 37, fiboFloat((float)37));
    printf("n: %d, fiboLong: %d\n", 47, fiboLong(47));
    printf("n: %d, fiboLongLong: %d\n", 47, fiboLongLong(47));
    printf("n: %d, fiboDouble: %i\n", 50, fiboDouble(46));
    printf("n: %L, fibo:LongDouble %L\n", 50, fiboLongDouble(46));

return 0;
}
