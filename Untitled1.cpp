//���ʵ��һ��˳���
#include<stdio.h>
typedef struct{
  int data[100];
  int length;
}Sqlist;
void creat(Sqlist &L);
void show(Sqlist &L);
int main()
{
 Sqlist L;
 L.length=0;
 creat(L);
 show(L);
 return 0;
}
void creat(Sqlist &L)
{
  int a;
  printf("������Ҫ������Ԫ�ظ���\t");
  scanf("%d",&a);
  for(int i=0;i<a;i++)
  {
    scanf("%d",&L.data[i]);
    L.length++;
  }
}
void show(Sqlist &L)
{
  printf("˳�����Ԫ����");
  for(int i=0;i<L.length;i++)
  {
    printf("%d",L.data[i]);
  }
  printf("\n");
}
