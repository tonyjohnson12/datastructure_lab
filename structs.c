
#include<stdio.h>

struct student1
{
    int rno;
    char name[10];
    float s1,s2,s3,percent,sum;

};

void main()
{
  struct student1 student [50];
  int st_no=0;
  printf("\n No.of stuydents :");
  scanf("%d",&st_no);
  for(int i=0;i<st_no;i++)
  {
      printf("\n enter rno");
      scanf("%d",&student[i].rno);
      printf("\n enter name");
      scanf("%s",&student[i].name);
      printf("\n enter 3 suject mark");
      scanf("%f%f%f",&student[i].s1,&student[i].s2,&student[i].s3);
      student[i].sum=student[i].s1+student[i].s2+student[i].s3;
      student[i].percent=((student[i].sum)/300.0)*100;
  }
  for(int i=0;i<st_no;i++)
  {
      printf("\n _________student details__________");
      printf("\n Name          : %s",student[i].name);
      printf("\n Roll Number   : %d",student[i].rno);
      printf("\n sum           : %f",student[i].sum);
      printf("\n percentage    : %f",student[i].percent);
  }
}
