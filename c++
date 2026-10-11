#include<iostream>
using namespace std;

int main(){

    int low,high;

    while(1){ //test case

        cin>>low>>high; //range input

        if(low==0 && high==0)
            break; //terminate
        int count=0;    //amicable nmbr count
        int i;
    for(int a=low; a<=high; a++){   //range er sokol nmbr check

        int sum1=0;
        for(i=1; i<=a/2; i++){
            if(a%i==0)
                sum1=sum1+i;
        }

        int b=sum1;
        int sum2=0;
        if(b>a && b>=low && b<=high){

        for(i=1; i<=b/2; i++){
            if(b%i==0)
                sum2=sum2+i;
        }
         if(sum2==a)
            count++;
        }

    }

    cout<<count<<endl;

    }

return 0;
}
