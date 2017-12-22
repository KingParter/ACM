/***************************************************
2018���ŷ��з�����A-������λ����

����һ��16����������������Ʒ����Ժ�16�������

�ύ�����ͨ��70%��ϣ���д����ܰ�æָ������

***************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned int reverse(unsigned int num)
{
    //TODO:
    unsigned int result = 0;
    for (unsigned int i=0; i<8; i++)
    {
        unsigned int md = num % 16;
        switch (md)
        {
            case 0:
                md = 0;
                break;
            case 1:
                md = 8;
                break;
            case 2:
                md = 4;
                break;
            case 3:
                md = 12;
                break;
            case 4:
                md = 2;
                break;
            case 5:
                md = 10;
                break;
            case 6:
                md = 6;
                break;
            case 7:
                md = 14;
                break;
            case 8:
                md = 1;
                break;
            case 9:
                md = 9;
                break;
            case 10:
                md = 5;
                break;
            case 11:
                md = 13;
                break;
            case 12:
                md = 3;
                break;
            case 13:
                md = 11;
                break;
            case 14:
                md = 7;
                break;
            case 15:
                md = 0;
                break;
            default:
                break;                        
        }
        //result += md*pow(16, 7-i);
        result += (md<<(28-4*i));
        num /= 16;
    }
    
    return result;
}

int main(int argc, char *argv[])
{
    unsigned int num = 0;
    unsigned int ret = 0;

    if (1 != fscanf(stdin, "0x%x", &num)) {
        fprintf(stderr, "input error\n");
        return 0;
    }
    ret = reverse(num);
    printf("%08x\n", ret);
    return 0;
}
