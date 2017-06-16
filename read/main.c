//
//  main.c
//  read
//
//  Created by 20161104601 on 17/6/16.
//  Copyright © 2017年 20161104601. All rights reserved.
//

#include <stdio.h>
int main()
{
    FILE *fp ;
    char str[1000];
    int max;
    int player, score, timein, round;
    fp=fopen("TXT", "r" ); //注意调整文件名
    if( fp==NULL )
    {
        printf("open file erorr\n");
        return -1;
    }
    fgets(str, sizeof(str), fp ); //读第一行
    sscanf(str,"%d", &max );
    while( fgets(str, sizeof(str), fp )) //读其余行
    {
        sscanf(str, "%d%d%d%d", &player, &round, &timein, &score ); //从字符串读取相关数据
        printf("玩家： %02d  得分： %3d  上场时间： %5d 场次： %02d\n",
               player, score, timein, round );
    }
    fclose(fp);
    return 0;
}
