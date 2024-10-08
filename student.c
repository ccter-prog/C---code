#include <stdio.h>
#include <string.h>

enum NUM {NAME = 32, XINGBIE = 7};

struct student
{
    char name[NAME];
    char xingbie[XINGBIE];
    int age;
    long long number;
} student;

void caidan(void);
void write(void);
void print(void);
void xiugai(void);

int main(int argc, char const *argv[])
{
    caidan();
    return 0;
}

void caidan(void)
{
    int xuanze;
    int temp;
    int control = 0;
    do
    {
        printf("1.录入信息 2.打印信息 3.修改信息 0.退出，请选择：");
        scanf("%d", &xuanze);
        if(control == 0)
        {
            temp = xuanze;
            if(temp == 1)
            {
                control++;
            }
        }
        switch(xuanze)
        {
            case 1:
                write();
                break;
            case 2:
                if(temp == 1)
                {
                    print();
                }
                else
                {
                    printf("请先进行录入信息！\n");
                }
                break;
            case 3:
                xiugai();
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("不是有效操作，请重新选择\n");
                break;
        }
    } while(xuanze);
}

void print(void)
{
    printf("你的姓名是：%s\n", student.name);
    printf("你的性别是：%s\n", student.xingbie);
    printf("你的年龄是：%d\n", student.age);
    printf("你的学号是：%lld\n", student.number);
    printf("信息打印完毕\n");
}

void write(void)
{
    printf("请输入你的姓名：");
    scanf("%s", student.name);
start:
    printf("请输入你的性别：");
    scanf("%s", student.xingbie);
    if(strcmp(student.xingbie, "男") != 0 && strcmp(student.xingbie, "女") != 0 && strcmp(student.xingbie, "未知") != 0)
    {
        printf("请输入男、女或未知！\n");
        goto start;
    }
    printf("请输入你的年龄：");
    scanf("%d", &student.age);
    printf("请输入你的学号：");
    scanf("%lld", &student.number);
    printf("信息录入完毕\n");
}

void xiugai(void)
{
    print();
    int xuanze;
    do
    {
        printf("1.修改姓名 2.修改性别 3.修改年龄 4.修改学号 0.退出，请选择：");
        scanf("%d", &xuanze);
        switch(xuanze)
        {
            case 1:
                for(int i = 0;i < NAME;i++)
                {
                    student.name[i] = '\0';
                }
                printf("请输入你的姓名：");
                
                if(scanf("%s", student.name) != 0)
                {
                    printf("修改成功\n");
                }
                else
                {
                    printf("修改失败\n");
                    while(getchar() != '\n');
                }
                break;
            case 2:
                for(int i = 0;i < XINGBIE;i++)
                {
                    student.xingbie[i] = '\0';
                }
                printf("请输入你的性别：");
                if(scanf("%s", student.xingbie) != 0)
                {
                    printf("修改成功\n");
                }
                else
                {
                    printf("修改失败\n");
                    while(getchar() != '\n');
                }
                break;
            case 3:
                printf("请输入你的年龄：");
                if(scanf("%d", &student.age) != 0)
                {
                    printf("修改成功\n");
                }
                else
                {
                    printf("修改失败\n");
                    while(getchar() != '\n');
                }
                break;
            case 4:
                printf("请输入你的学号：");
                if(scanf("%lld", &student.number) != 0)
                {
                    printf("修改成功\n");
                }
                else
                {
                    printf("修改失败\n");
                    while(getchar() != '\n');
                }
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("不是有效操作，请重新输入！\n");
                break;
        }
    } while(xuanze);
    if(xuanze != 0)
    {
        print();
    }
}