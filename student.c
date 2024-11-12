#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum NUM {NAME = 32, GENDER = 7};

struct student
{
    char name[NAME];
    char gender[GENDER];
    int age;
    long long number;
};

void menu(struct student information[], int len, int *number);
void write(struct student information[], int *Actual_input);
void print(struct student information[], const int Actual_input);
void modify(struct student information[], const int Actual_input);

int main(int argc, char const *argv[])
{
    int number;
    printf("请输入有多少个学生：");
    scanf("%d", &number);
    struct student information[number];
    int len = sizeof(information) / sizeof(information[0]);
    menu(information, len, &number);
    return 0;
}

void menu(struct student information[], int len, int *number)
{
    int select;
    int temp;
    int control = 0;
    static int Actual_input = 0;
    do
    {
        if(*number > Actual_input)
        {
            *number = Actual_input;
        }
        printf("1.录入信息 2.查找信息 3.修改信息 0.退出，请选择：");
        scanf("%d", &select);
        if(control == 0)
        {
            temp = select;
            if(temp == 1)
            {
                control++;
            }
        }
        switch(select)
        {
            case 1:
                write(information, &Actual_input);
                break;
            case 2:
                if(temp == 1)
                {
                    print(information, Actual_input);
                }
                else
                {
                    printf("请先进行录入信息！\n");
                }
                break;
            case 3:
                modify(information, Actual_input);
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("不是有效操作，请重新选择\n");
                break;
        }
    } while(select);
}

void print(struct student information[], const int Actual_input)
{
    int select;
    printf("一共有%d组数据，请选择查看：", Actual_input);
    scanf("%d", &select);
    printf("第%d组数据：\n", select);
    printf("姓名：%s\n", information[select - 1].name);
    printf("性别：%s\n", information[select - 1].gender);
    printf("年龄：%d\n", information[select - 1].age);
    printf("学号：%lld\n", information[select - 1].number);
    printf("打印完毕\n");
}

void write(struct student information[], int *Actual_input)
{
    static int i = 0;
    int temp = 0;
    for(;i < 100;i++)
    {
        temp = 0;
        printf("请输入你的姓名：");
        scanf("%s", information[i].name);
        while(1)
        {
            printf("请输入你的性别：");
            scanf("%s", information[i].gender);
            if(strcmp(information[i].gender, "男") != 0 && strcmp(information[i].gender, "女") != 0 && strcmp(information[i].gender, "未知") != 0)
            {
                printf("请输入男、女或未知！\n");
                while(getchar() != '\n');
                continue;
            }
            else
            {
                break;
            }
        }
        while(1)
        {
            printf("请输入你的年龄：");
            if(scanf("%d", &information[i].age) == 0)
            {
                printf("请输入数字！\n");
                while(getchar() != '\n');
                continue;
            }
            else
            {
                break;
            }
        }
        while(1)
        {
            printf("请输入你的学号：");
            if(scanf("%lld", &information[i].number) == 0)
            {
                printf("请输入数字！\n");
                while(getchar() != '\n');
                continue;
            }
            else
            {
                break;
            }
        }
        printf("信息录入完毕！\n");
        (*Actual_input)++;
        char str[10];
        do
        {
            printf("是否继续录入：");
            scanf("%3s", str);
            //printf("%s\n", str);  调试用
            while(getchar() != '\n');
            if(strcmp(str, "是") == 0)
            {
                break;
            }
            else if(strcmp(str, "否") == 0)
            {
                temp = 1;
                i++;
                break;
            }
            else
            {
                printf("请输入是或否！\n");
                continue;
            }
        } while(1);
        if(temp == 1)
        {
            break;
        }
    }
}

void modify(struct student information[], const int Actual_input)
{
    int select;
    printf("一共有%d组数据，请选择修改：", Actual_input);
    scanf("%d", &select);
    printf("姓名：%s\n", information[select - 1].name);
    printf("性别：%s\n", information[select - 1].gender);
    printf("年龄：%d\n", information[select - 1].age);
    printf("学号：%lld\n", information[select - 1].number);
    int num;
    do
    {
        printf("1.姓名 2.性别 3.年龄 4.学号 0.退出，请输入：");
        if(scanf("%d", &num) == 0)
        {
            printf("请输入数字！\n");
            while(getchar() != '\n');
            continue;
        }
        switch(num)
        {
            case 1:
                printf("请输入新的名字：");
                if(scanf("%s", information[select - 1].name) == 0)
                {
                    printf("修改失败！\n");
                }
                else
                {
                    printf("修改成功！\n");
                }
                break;
            case 2:
                printf("请输入新的性别：");
                if(scanf("%s", information[select - 1].gender) == 0)
                {
                    printf("修改失败！\n");
                }
                else
                {
                    printf("修改成功！\n");
                }
                break;
            case 3:
                printf("请输入新的年龄：");
                if(scanf("%d", &information[select - 1].age) == 0)
                {
                    printf("请输入数字！\n");
                }
                else
                {
                    printf("修改成功！\n");
                }
                break;
            case 4:
                printf("请输入新的学号：");
                if(scanf("%lld", &information[select - 1].number) == 0)
                {
                    printf("请输入数字！\n");
                }
                else
                {
                    printf("修改成功！\n");
                }
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("不是有效操作！\n");
        }
    } while(num != 0);
}