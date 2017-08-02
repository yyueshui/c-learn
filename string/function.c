#include <stdio.h>
#include <string.h>
#define USER_NAME "admin"
#define PASSWORD "admin"
#define KEY 5;
void getString(char str[], int count);
/**
 * 登录  成功返回1 否则返回0
 * @param username
 * @param password
 * @return
 */
int login(char username[], char password[]);

/**
 * 加密传入的字符串
 * @param str
 * @return encryptString
 */
char * encrypt(char str[]);

/**
 * 解密
 * @param str
 * @return
 */
char * decrypt(char str[]);

int main()
{
    //长度统计
    /*
    char word1[] = "HelloWorld";
    char word2[] = {'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0'};
    char word3[] = "你好，世界！";
//    printf("word1的长度为%ld\n", strlen(word1));
//    printf("word2的长度为%ld\n", strlen(word2));
//    printf("word3的长度为%ld\n", strlen(word3));
     */

    //字符串复制，数组的复制原理，每个元素逐个进行复制, 不能直接str1 = str2;
    /*
    char cp1[50] = "HelloWorld";
    char cp2[20];
    fgets(cp2, 10, stdin);
    strcpy(cp1, cp2);
    printf("%s\t%s\n", cp1, cp2);
    */
    /*
    //字符串比较
    char username[50], password[50];
    printf("请输入用户名\n");

    getString(username, 50);
    printf("请输入密码\n");
    getString(password, 50);

    if(login(username, password)) {
        printf("login success \n");
    } else {
        printf("login fail \n");
    }
    */
    //字符串拼接
    /*
    char cat1[100] = "你好，世界！";
    char cat2[20] = "你也好";
    strcat(cat1, cat2);
    printf("%s\t%s\n", cat1, cat2);
      */

    //加密字符串
    char encryptString[] = "123456";
    encrypt(encryptString);

    printf("%s\n", encryptString);
    decrypt(encryptString);
    printf("%s\n", encryptString);

    return 0;
}

int login(char username[], char password[])
{
    int result = 0;

    if(strcmp(username, USER_NAME) == 0 && strcmp(password, PASSWORD) == 0) result = 1;

    return result;
}

void getString(char str[], int length )
{
    //使用fgets函数接收字符，使用\0替换字符数组最后一位的\n
    fgets(str, length, stdin);
    char * ptrFind = strchr(str, '\n'); //查找字符数组的\n元素，返回\n元素所在的指针
    if(ptrFind) {
        *ptrFind = '\0';
    }

}

char * encrypt(char string[])
{
    int length = strlen(string);
    for (int  i= 0; i < length; ++i) {
        *(string + i) = *(string + i) + i + KEY;
    }

    return string;
}

char * decrypt(char string[])
{
    int length = strlen(string);
    for (int i = 0; i < length; ++i) {
        *(string + i) = *(string + i) - i - KEY;
    }

    return string;
}