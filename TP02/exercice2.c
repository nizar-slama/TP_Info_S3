#include<stdio.h>
 int
 main(){
    int urec(int n){
        if (n==0){
            return 1;
        }else{
            return 3*urec(n-1)-1;
        }
}
int res=urec(10);


int viter(int n){
    int u_courent, u_precedent;
    u_courent=1;
    for (int i=0;i<n,i++){
        u_precedent=u_courent;
        u_courent=3*u_precedent-1;
    }
    return u_courent
}
int res2=u_courent(10)
