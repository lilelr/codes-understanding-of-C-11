//
// Created by YuXiao on 18/1/2.
//

#include <pthread.h>
#include <iostream>
using namespace std;

int thread_local errorCode = 0;
//int  errorCode = 0;


void* MaySetErr(void* input){
    if(*(int*)input == 1){
        errorCode = 1;
    }else if(*(int*)input == 2){
        errorCode = -1;
    }else{
        errorCode = 0;
    }
}

int main(){
    int input_a = 1;
    int input_b = 2;
    pthread_t pthread1, pthread2;
    pthread_create(&pthread1, NULL, &MaySetErr, &input_a);
    pthread_create(&pthread2, NULL, &MaySetErr, &input_b);

    pthread_join(pthread2,NULL);
    pthread_join(pthread1,NULL);
    cout<<errorCode<<endl;

}
