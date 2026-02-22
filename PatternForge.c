#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<ctype.h>
void My_A(int n){
  for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++)
    printf(" ");
    for(int j=0;j<2*i-1;j++){
      if(i==1 || i==n/2+1){
        printf("* ");
        j++; 
      }
      else {
      if(j==0 || j==2*i-2)
      printf("*");
      else printf(" ");
    }
  }
    printf("\n");
  }
  printf("\n");
}
void My_B(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n-1 || i==n/2){
        if(j==n-1) continue;
        else printf("* ");
      }
      else{
        if(j==0 || j==n-1) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_C(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n-1){
        if(j==0 || j==n-1) printf("  ");
        else printf("* ");
      }
      else{
        if(i==1 || i==n-2){
          if(j==0 || j==n-1) printf("* ");
          else printf("  ");
        }
        else{
          if(j==0) printf("* ");
          else printf("  ");
        }
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_D(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n-1 ){
        if(j==n-1) continue;
        else printf("* ");
      }
      else{
        if(j==0 || j==n-1) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_E(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      if(i==0 || i==n-1 || i==n/2)
        printf("* ");
      else{
        if(j==0) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_F(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      if(i==0 || i==n/2)
        printf("* ");
      else{
        if(j==0) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_G(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0){
        if(j==0) printf("  ");
        else printf("* ");
      }
      else if(i==n/2){
        if(j>0 && j<n/2 || j==n-1) printf("  ");
        else printf("* ");
      }
      else if(i==n-1){
        if(j==0 || j==n-1) printf("  ");
        else printf("* ");
      }
      else{
        if(i<n/2){
          if(j==0) printf("* ");
          else printf("  ");
        }
        else{
          if(j==0 || j==n-1) printf("* ");
          else printf("  ");
        }
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_H(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==n/2)
        printf("* ");
      else{
        if(j==0 || j==n-1) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_I(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n-1 ){
        if(j==0 || j==n-1) printf("  ");
        else  printf("* ");
      }
      else{
        if(j==n/2) printf("* ");
        else printf("  ");
      }
    }
    printf("\n"); 
  }
  printf("\n");
}
void My_J(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0) printf("* ");
      else if(i>(2*n)/3 && i!=n-1){
        if(j==0 || j==n/2) printf("* ");
        else printf("  ");
      }
      else{
        if(i==n-1){
          if(j<=n/2){
            if(j==0 || j==n/2) printf("  ");
            else printf("* ");
          }
        }
        else{
          if(j==n/2) printf("* ");
          else printf("  ");
        }
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_K(int n){
  for(int i=0;i<n;i++){
    if(i<=n/2){ 
      for(int j=0;j<=n/2-i;j++){
        if(j==0 || j==n/2-i) printf("* ");
        else printf("  ");
      }
      printf("\n");
    }
    else{
      for(int j=n/2;j<=i;j++){
        if(j==n/2 || j==i) printf("* ");
        else printf("  ");
      }
      printf("\n");
    }
  }
  printf("\n");
}
void My_L(int n){

    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==n-1){
        if(j==n-1) continue;
        else printf("* ");
      }
      else{
        if(j==0) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_M(int n){
    for(int i=0;i<n;i++) {
        for(int j=0; j<n; j++) {
            if(j==0 || j==n-1 || (i==j && i<=n/2) || (i+j==n-1 && i<=n/2)) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
void My_N(int n){
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j==0 || j==n-1 || i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
void My_O(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n-1 ){
        if(j==0 || j==n-1) printf("  ");
        else printf("* ");
      }
      else{
        if(j==0 || j==n-1) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_P(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0 || i==n/2){
        if(j==n-1) continue;
        else printf("* ");
      }
      else{
        if(i>n/2){
          if(j==0) printf("* ");
          else printf("  ");
        }
        else{
          if(j==0 || j==n-1) printf("* ");
          else printf("  ");
        }
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_Q(int n){
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i== 0){
                if(j==0 || j==n-1) printf("  ");
                else printf("* ");
            }
            else if(i==n-1) {
                if(j==0) printf("  ");
                else printf("* ");
            }
            else {
                if(j==0 || j==n-1) printf("* ");
                else if(i==n-2 && j==n-2) printf("* "); 
                else printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<2*n;i++) printf(" ");
    printf("* ");
    printf("\n");
}
void My_R(int n){
  for(int i=0;i<n;i++){
    for(int j=0,k=1;j<n;j++){
      if(i==0 || i==n/2){
        if(j==n-1) continue;
        else printf("* ");
      }
      else{ 
        if(i<n/2){
          if(j==0 || j==n-1) printf("* ");
          else printf("  ");
        }
      }
    }
    if(i>n/2){
      for(int j=0;j<i;j++){
        if(j==0 || j==i-1) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_S(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0){
        if(j==0) printf("  ");
        else printf("* ");
      }
      else if(i==n/2){
        if(j==0 || j==n-1) printf("  ");
        else printf("* ");
      }
      else if(i==n-1){
        if(j==n-1) printf("  ");
        else printf("* ");
      }
      else{
        if(i<n/2){
          if(j==0) printf("* ");
          else printf("  ");
        }
        else{
          if(j==n-1) printf("* ");
          else printf("  ");
        }
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_T(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==0) printf("* ");
      else{
        if(j==n/2) printf("* ");
        else printf("  ");
      }
    }
    printf("\n"); 
  }
  printf("\n");
}
void My_U(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==n-1){
        if(j==0 || j==n-1) printf("  ");
        else printf("* ");
      }
      else{
        if(j==0 || j==n-1) printf("* ");
        else printf("  ");
      }
    }
    printf("\n");
  }
  printf("\n");
}
void My_V(int n){
  for(int i=n;i>0;i--){
    for(int j=0;j<2*i-1;j++){
      if (j==0){
        for(int k=0;k<n-i;k++) printf(" ");
        printf("*");
      } 
      else if(j==2*i-2) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  printf("\n");
} 
void My_W(int n){
  for(int i=1,k=4,m=1,a=n/2;i<=n;i++,k+=2){
    for(int j=i;j>0;j--){
      if(j==1) printf("*");
      else printf(" ");
    }
    if(i<=n/2){
      for(int j=0;j<(n*3)-k;j++) printf(" ");
      printf("*");
    }
    if(i==n){
      for(int j=2;j<n;j++) printf(" ");
      printf("*");
    }
    else if(i>n/2){
      for(int j=0;j<2*a-1;j++) {
        printf(" ");
      }
      printf("*");
      if(i>n/2+1){
        for(int j=0;j<2*m-1;j++)
        printf(" ");
        printf("*");
        m++;
      }
      if(i>n/2){
        for(int j=0;j<2*a-1;j++) 
        printf(" ");
        printf("*");
        a--;
    }
  }
    printf("\n");
  } 
  printf("\n");
}
void My_X(int n){
  for(int i=0;i<n;i++) {
        for(int j=0;j<(i<n/2?i:n-i-1);j++) printf("  ");
        printf("* ");
        for (int j=0;j<(n-2*(i<n/2? i:n-i-1)-2);j++) printf("  ");
        if (i != n / 2) printf("*");
        printf("\n");
      }
  printf("\n");
}
void My_Y(int n){
  for (int i=0;i<n/2;i++) {
        for (int j=0;j<n;j++) {
            if (j==i || j==n-1-i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for (int i=n/2;i<n;i++) {
        for (int j=0;j<n;j++){
            if(j==n/2) printf("* ");
            else printf("  ");
        }
        printf("\n");
      }
      printf("\n");
}
void My_Z(int n){
  for(int i=0; i<n; i++) printf("* ");
  printf("\n");
  for(int i=1; i<n-1; i++) {
      for(int j=0; j<n-i-1; j++) printf("  ");
      printf("* \n");
  }
  for(int i=0; i<n; i++) printf("* ");
  printf("\n");
  printf("\n");
}
int main(){
  int n;
  printf("Enter letter size (odd) : ");
  scanf("%d",&n);
  char name[100];
  char name_u[100];
  printf("Enter Your Name : ");
  scanf("%s",name);
  for(int i=0;i<strlen(name);i++) name_u[i]=toupper(name[i]);
  for(int i=0;i<strlen(name);i++){
    switch(name_u[i]){
      case 'A' : My_A(n); break;
      case 'B' : My_B(n); break;
      case 'C' : My_C(n); break;
      case 'D' : My_D(n); break;
      case 'E' : My_E(n); break;
      case 'F' : My_F(n); break;
      case 'G' : My_G(n); break;
      case 'H' : My_H(n); break;
      case 'I' : My_I(n); break;
      case 'J' : My_J(n); break;
      case 'K' : My_K(n); break;
      case 'L' : My_L(n); break; 
      case 'M' : My_M(n); break;
      case 'N' : My_N(n); break; 
      case 'O' : My_O(n); break;
      case 'P' : My_P(n); break; 
      case 'Q' : My_Q(n); break; 
      case 'R' : My_R(n); break;
      case 'S' : My_S(n); break;
      case 'T' : My_T(n); break; 
      case 'U' : My_U(n); break;
      case 'V' : My_V(n); break;
      case 'W' : My_W(n); break;
      case 'X' : My_X(n); break;
      case 'Y' : My_Y(n); break;
      case 'Z' : My_Z(n); break;
    }
  }
  return 0;
}