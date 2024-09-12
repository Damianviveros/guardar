#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
    for(int i=0;i==101;i++){
        if(i%3==0 && i%5==0){
            cout<<"fizzbuzz";}
        else{
            if(i%3==0){
                printf("fizz");
            }
            else{
                if(i%5==0){
                    printf("buzz");}
                else{
                    cout<<i;}}}}
    return 0;}