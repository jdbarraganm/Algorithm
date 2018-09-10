#include <stdio.h>

long long fibo(long long n){
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


main(){
    long long n;
    scanf("%lld",&n);
    fibo(n);

return 0;
}
