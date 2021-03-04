#include <stdio.h>
#include <math.h>
#define K 13

void prime(int n);
void binary(int j);
int main() {

prime(K);
return 0;
}

void binary(int j)
{
    int i=0;
    int base[10]={0};
    int num=j;
    while(num>0)
    {
    base[i]= num%2;
    num/=2;
    ++i;
    }
    for(int x=6;x>=0;--x)
    {
        printf("%0ld",base[x]);
    }
    printf("\n");

}

void prime(int k)
{
    int count, i, flag, sr;
    int n=1;
    count=1;

    while(count <= k){

        sr=sqrt(n);
        flag = 0;
        for(i=2; i<= sr; i++){
            if(n%i==0) {
                flag = 1;
                break;
            }

        }
        if(flag==0) {

            binary(n);
            count++;
        }

        n++;
    }

}
