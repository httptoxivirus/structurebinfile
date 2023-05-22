#include<stdio.h>
#include<string.h>
struct college {
    int rating;
    char chancellor[100];
    float cgpa;
};

 int main() {
  FILE *fp = fopen("hey.bin","wb");
     struct college a;
     a.rating = 0;
     strcpy(a.chancellor,"Dr.Kamal Ghanshala");
     a.cgpa = 9.18;
     fwrite(&a,1,sizeof(a),fp);
     fclose(fp);
   fp = fopen("hey.bin","rb");
   fread(&a,1,sizeof(a),fp);
   printf("%d",a.rating);
   fclose(fp);
    return 0;
 }
