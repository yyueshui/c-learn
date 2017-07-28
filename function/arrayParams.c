#include <stdio.h>
#include <stdlib.h>
#define N  5
void input(double[]);
void sort(double[]);
void outPut(double[]);

int main()
{
    double scores[N];
    //1、录入
    //2、排序
    //3、输出
    //注意、c不允许返回数组
    input(scores); //不需要&
    sort(scores);
    outPut(scores);

}

//void input(double scores[])
void input(double * scores)
{
    for (int j = 0; j < N; ++j) {
        printf("请输入第%d门课的成绩", j + 1);
        scanf("%lf", (scores+j));
    }
}

void sort(double scores[])
{
    double tmp;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if(scores[j] > scores[j + 1]) {
                tmp = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = tmp;
            }
        }
    }
}

void outPut(double scores[])
{
    printf("*************************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    for (int i = 0; i < N; ++i) {
        printf("%.2lf\t", *(scores + i));
    }
}